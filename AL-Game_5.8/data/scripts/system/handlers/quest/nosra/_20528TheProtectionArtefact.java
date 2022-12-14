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
package quest.nosra;

import com.aionemu.gameserver.model.DialogAction;
import com.aionemu.gameserver.model.TeleportAnimation;
import com.aionemu.gameserver.model.gameobjects.Npc;
import com.aionemu.gameserver.model.gameobjects.player.Player;
import com.aionemu.gameserver.questEngine.handlers.QuestHandler;
import com.aionemu.gameserver.questEngine.model.QuestEnv;
import com.aionemu.gameserver.questEngine.model.QuestState;
import com.aionemu.gameserver.questEngine.model.QuestStatus;
import com.aionemu.gameserver.services.item.ItemService;
import com.aionemu.gameserver.services.teleport.TeleportService2;
import com.aionemu.gameserver.world.zone.ZoneName;

/**
 * @author Phantom_KNA
 */
public class _20528TheProtectionArtefact extends QuestHandler {

	public static final int questId = 20528;
	@SuppressWarnings("unused")
	private final static int[] mobs = { 244125, 244126 };

	public _20528TheProtectionArtefact() {
		super(questId);
	}

	@Override
	public void register() {
		qe.registerOnLevelUp(questId);
		qe.registerQuestNpc(806079).addOnTalkEvent(questId); // Peregran
		qe.registerQuestNpc(703324).addOnTalkEvent(questId); // Sphiro's Treasure
		qe.registerQuestNpc(806296).addOnTalkEvent(questId); // Wizabo
		qe.registerQuestNpc(731714).addOnTalkEvent(questId); // Teleport a Isla
		qe.registerQuestNpc(731715).addOnTalkEvent(questId); // Artefact
		qe.registerOnEnterZone(ZoneName.get("SPHIROS_TERRITORY_220110000"), questId);
		qe.registerOnEnterZone(ZoneName.get("CURSED_GORGE_220110000"), questId);
		qe.registerQuestNpc(244126).addOnKillEvent(questId);
		qe.registerQuestNpc(244125).addOnKillEvent(questId);
		qe.registerOnMovieEndQuest(877, questId);
	}

	@Override
	public boolean onDialogEvent(QuestEnv env) {
		final Player player = env.getPlayer();
		final QuestState qs = player.getQuestStateList().getQuestState(questId);
		if (qs == null) {
			return false;
		}

		int var = qs.getQuestVarById(0);
		int targetId = 0;
		DialogAction dialog = env.getDialog();
		if (env.getVisibleObject() instanceof Npc) {
			targetId = ((Npc) env.getVisibleObject()).getNpcId();
		}
		if (qs.getStatus() == QuestStatus.START) {
			switch (targetId) {
				case 806079: { // Peregrans
					switch (env.getDialog()) {
						case QUEST_SELECT:
							if (var == 0) {
								return sendQuestDialog(env, 1011);
							}
							else if (var == 2) {
								return sendQuestDialog(env, 1693);
							}
						case SETPRO1:
							ItemService.addItem(player, 182216089, 1);
							return defaultCloseDialog(env, 0, 1); // 1
						case SETPRO3:
							return defaultCloseDialog(env, 2, 3); // 1
						default:
							break;
					}
				}
					break;
				case 806296: { // Wizabo
					switch (env.getDialog()) {
						case QUEST_SELECT:
							if (var == 1) {
								return sendQuestDialog(env, 1352);
							}
						case SETPRO2:
							return defaultCloseDialog(env, 1, 2); // 2
						default:
							break;
					}
				}
					break;
				case 703324: { // Sphiro's Treasure
					switch (dialog) {
						case USE_OBJECT: {
							return true;
						}
						default:
							break;

					}
				}
				case 806297: { // Awakened Wizabo
					switch (env.getDialog()) {
						case QUEST_SELECT:
							if (var == 5) {
								return sendQuestDialog(env, 2716);
							}
							else if (var == 8) {
								return sendQuestDialog(env, 3739);
							}
							else if (var == 11) {
								return sendQuestDialog(env, 6841);
							}
						case CHECK_USER_HAS_QUEST_ITEM: {
							return checkQuestItems(env, 5, 6, false, 10000, 10001); // 4
						}
						case SETPRO9: {
							return defaultCloseDialog(env, 8, 9);
						}
						case SET_SUCCEED: {
							removeQuestItem(env, 164002348, 1);
							TeleportService2.teleportTo(player, 220110000, 1762f, 2005f, 195f, (byte) 51, TeleportAnimation.BEAM_ANIMATION);
							qs.setStatus(QuestStatus.REWARD);
							updateQuestStatus(env);
							return defaultCloseDialog(env, 11, 12);
						}
						default:
							break;
					}
				}
					break;
				case 731714: { // Teleport
					switch (env.getDialog()) {
						case QUEST_SELECT:
							if (var == 6) {
								return sendQuestDialog(env, 3057);
							}
						case SETPRO7: {
							TeleportService2.teleportTo(player, 220110000, 2230f, 2306f, 535f, (byte) 89, TeleportAnimation.BEAM_ANIMATION);
							return defaultCloseDialog(env, 6, 7);
						}
						default:
							break;
					}
				}
				case 731715: { // Artefact
					switch (env.getDialog()) {
						case QUEST_SELECT:
							if (var == 9) {
								return sendQuestDialog(env, 4080);
							}
						case SETPRO10: {
							playQuestMovie(env, 877);
							return defaultCloseDialog(env, 9, 10);
						}
						default:
							break;
					}
				}
			}
		}
		else if (qs.getStatus() == QuestStatus.REWARD) {
			if (targetId == 806079) {
				if (env.getDialog() == DialogAction.USE_OBJECT) {
					return sendQuestDialog(env, 10002);
				}
				else {
					return sendQuestEndDialog(env);
				}
			}
		}
		return false;
	}

	@Override
	public boolean onMovieEndEvent(QuestEnv env, int movieId) {
		if (movieId == 877) {
			changeQuestStep(env, 10, 11, false);
			return true;
		}
		return false;
	}

	@Override
	public boolean onEnterZoneEvent(QuestEnv env, ZoneName zoneName) {
		Player player = env.getPlayer();
		if (player == null) {
			return false;
		}

		QuestState qs = player.getQuestStateList().getQuestState(questId);
		if (qs != null && qs.getStatus() == QuestStatus.START) {
			int var = qs.getQuestVarById(0);
			if (var == 3 && zoneName == ZoneName.get("SPHIROS_TERRITORY_220110000")) {
				changeQuestStep(env, 3, 4, false);
				return true;
			}
			else if (var == 7 && zoneName == ZoneName.get("CURSED_GORGE_220110000")) {
				changeQuestStep(env, 7, 8, false);
				return true;
			}
		}
		return false;
	}

	@Override
	public boolean onKillEvent(QuestEnv env) {
		Player player = env.getPlayer();
		QuestState qs = player.getQuestStateList().getQuestState(questId);
		if (qs != null && qs.getStatus() == QuestStatus.START) {
			int var = qs.getQuestVarById(0);
			if (var == 4) {
				int[] protect2 = { 244126 };
				int[] protect = { 244125 };
				int targetId = env.getTargetId();
				int var1 = qs.getQuestVarById(1);
				int var2 = qs.getQuestVarById(2);
				switch (targetId) {
					case 244125: {
						if (var1 < 9) {
							return defaultOnKillEvent(env, protect, 0, 9, 1);
						}
						else if (var1 == 9) {
							if (var2 == 1) {
								qs.setQuestVar(5);
								updateQuestStatus(env);
								return true;
							}
							else {
								return defaultOnKillEvent(env, protect, 9, 10, 1);
							}
						}
						break;
					}
					case 244126: {
						if (var2 < 1) {
							return defaultOnKillEvent(env, protect2, 0, 1, 2);
						}
						else if (var2 == 0) {
							if (var1 == 10) {
								qs.setQuestVar(5);
								updateQuestStatus(env);
								return true;
							}
							else {
								return defaultOnKillEvent(env, protect2, 0, 1, 2);
							}
						}
						break;
					}
				}
			}
		}
		return false;
	}

	@Override
	public boolean onLvlUpEvent(QuestEnv env) {
		return defaultOnLvlUpEvent(env);
	}
}
