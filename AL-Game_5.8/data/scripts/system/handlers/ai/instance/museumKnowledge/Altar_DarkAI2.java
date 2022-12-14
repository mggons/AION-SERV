/**
 * This file is part of Aion-Lightning <aion-lightning.org>.
 *
 *  Aion-Lightning is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Aion-Lightning is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details. *
 *  You should have received a copy of the GNU General Public License
 *  along with Aion-Lightning.
 *  If not, see <http://www.gnu.org/licenses/>.
 */
package ai.instance.museumKnowledge;

import java.util.List;

import com.aionemu.commons.network.util.ThreadPoolManager;
import com.aionemu.gameserver.ai2.AI2Actions;
import com.aionemu.gameserver.ai2.AIName;
import com.aionemu.gameserver.ai2.NpcAI2;
import com.aionemu.gameserver.controllers.observer.ItemUseObserver;
import com.aionemu.gameserver.model.EmotionType;
import com.aionemu.gameserver.model.TaskId;
import com.aionemu.gameserver.model.gameobjects.Npc;
import com.aionemu.gameserver.model.gameobjects.player.Player;
import com.aionemu.gameserver.network.aion.serverpackets.SM_EMOTION;
import com.aionemu.gameserver.network.aion.serverpackets.SM_SYSTEM_MESSAGE;
import com.aionemu.gameserver.network.aion.serverpackets.SM_USE_OBJECT;
import com.aionemu.gameserver.utils.PacketSendUtility;
import com.aionemu.gameserver.world.WorldMapInstance;
import com.aionemu.gameserver.world.WorldPosition;

/**
 * @author Rinzler
 */
@AIName("Altar_Dark") //731756
public class Altar_DarkAI2 extends NpcAI2 {

	protected int startBarAnimation = 1;
	protected int cancelBarAnimation = 2;

	@Override
	protected void handleDialogStart(Player player) {
		handleUseItemStart(player);
	}

	protected void handleUseItemStart(final Player player) {
		final int delay = getTalkDelay();
		if (delay != 0) {
			final ItemUseObserver observer = new ItemUseObserver() {

				@Override
				public void abort() {
					player.getController().cancelTask(TaskId.ACTION_ITEM_NPC);
					PacketSendUtility.broadcastPacket(player, new SM_EMOTION(player, EmotionType.END_QUESTLOOT, 0, getObjectId()), true);
					PacketSendUtility.sendPacket(player, new SM_USE_OBJECT(player.getObjectId(), getObjectId(), 0, cancelBarAnimation));
					player.getObserveController().removeObserver(this);
				}
			};
			player.getObserveController().attach(observer);
			PacketSendUtility.sendPacket(player, new SM_USE_OBJECT(player.getObjectId(), getObjectId(), getTalkDelay(), startBarAnimation));
			PacketSendUtility.broadcastPacket(player, new SM_EMOTION(player, EmotionType.START_QUESTLOOT, 0, getObjectId()), true);
			player.getController().addTask(TaskId.ACTION_ITEM_NPC, ThreadPoolManager.getInstance().schedule(new Runnable() {

				@Override
				public void run() {
					PacketSendUtility.broadcastPacket(player, new SM_EMOTION(player, EmotionType.END_QUESTLOOT, 0, getObjectId()), true);
					PacketSendUtility.sendPacket(player, new SM_USE_OBJECT(player.getObjectId(), getObjectId(), getTalkDelay(),
						cancelBarAnimation));
					player.getObserveController().removeObserver(observer);
					handleUseItemFinish(player);
				}
			}, delay));
		}
		else {
			handleUseItemFinish(player);
		}
	}

	protected void handleUseItemFinish(Player player) {
		if (!player.getInventory().decreaseByItemId(185000301, 1)) {
			// ?????? ????????? ????????? ?????? ????????? ????????? ??????????????? ?????? ????????? ?????? ???????????????.
			PacketSendUtility.playerSendPacketTime(player, SM_SYSTEM_MESSAGE.STR_MSG_junk_ideternity03_zone4_book_01, 0);
			return;
		}
		WorldPosition worldPosition = player.getPosition();
		if (worldPosition.isInstanceMap()) {
			if (worldPosition.getMapId() == 301560000) { // Heart Of Eternity 5.5
				WorldMapInstance worldMapInstance = worldPosition.getWorldMapInstance();
				killNpc(worldMapInstance.getNpcs(731756)); // Altar Dark.
				killNpc(worldMapInstance.getNpcs(731760)); // Dark Altar Energy.
				// ?????? ????????? ?????? ?????????????????????.
				PacketSendUtility.playerSendPacketTime(player, SM_SYSTEM_MESSAGE.STR_MSG_junk_ideternity03_zone4_book_02, 0);
				// ?????? ????????? ???????????? ????????? ????????? ?????????????????? ?????? ?????? ????????? ?????? ?????????????????????.
				PacketSendUtility.playerSendPacketTime(player, SM_SYSTEM_MESSAGE.STR_MSG_junk_ideternity03_zone4_book_03, 5000);
			}
		}
	}

	private void killNpc(List<Npc> npcs) {
		for (Npc npc : npcs) {
			AI2Actions.killSilently(this, npc);
		}
	}

	@Override
	public boolean isMoveSupported() {
		return false;
	}

	protected int getTalkDelay() {
		return getObjectTemplate().getTalkDelay() * 1000;
	}
}
