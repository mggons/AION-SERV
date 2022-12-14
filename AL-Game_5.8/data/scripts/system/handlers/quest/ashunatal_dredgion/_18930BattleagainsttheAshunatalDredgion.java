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
package quest.ashunatal_dredgion;

import com.aionemu.gameserver.model.DialogAction;
import com.aionemu.gameserver.model.gameobjects.player.Player;
import com.aionemu.gameserver.questEngine.handlers.QuestHandler;
import com.aionemu.gameserver.questEngine.model.QuestEnv;
import com.aionemu.gameserver.questEngine.model.QuestState;
import com.aionemu.gameserver.questEngine.model.QuestStatus;
import com.aionemu.gameserver.world.zone.ZoneName;

/**
 * @author Phantom_KNA
 */
public class _18930BattleagainsttheAshunatalDredgion extends QuestHandler {

	public static final int questId = 18930;

	int[] navigator = { 243809, 243808 };
	int[] officer = { 243811, 243810 };

	public _18930BattleagainsttheAshunatalDredgion() {
		super(questId);
	}

	@Override
	public void register() {
		qe.registerQuestNpc(806258).addOnQuestStart(questId); // Herodion
		qe.registerQuestNpc(806259).addOnTalkEvent(questId); // Nizna
		qe.registerQuestNpc(806258).addOnTalkEvent(questId); // Herodion
		qe.registerOnEnterZone(ZoneName.get("ASHUNATAL_DREDGION_301650000"), questId);
		qe.registerQuestNpc(243795).addOnKillEvent(questId); // Drakan Mage
		qe.registerQuestNpc(243795).addOnKillEvent(questId); // Drakan Mage
		for (int mob : navigator) {
			qe.registerQuestNpc(mob).addOnKillEvent(questId);
		}
		for (int mob : officer) {
			qe.registerQuestNpc(mob).addOnKillEvent(questId);
		}
	}

	@Override
	public boolean onDialogEvent(final QuestEnv env) {
		final Player player = env.getPlayer();
		int targetId = env.getTargetId();
		QuestState qs = player.getQuestStateList().getQuestState(questId);
		DialogAction dialog = env.getDialog();

		if (qs == null || qs.getStatus() == QuestStatus.NONE || qs.canRepeat()) {
			if (targetId == 806258) { // Herodion
				if (env.getDialog() == DialogAction.QUEST_SELECT) {
					return sendQuestDialog(env, 4762);
				}
				else {
					return sendQuestStartDialog(env);
				}
			}
		}
		else if (qs.getStatus() == QuestStatus.START) {
			int var = qs.getQuestVarById(0);
			if (targetId == 806259) { // Nelleus
				switch (dialog) {
					case QUEST_SELECT: {
						if (var == 1) {
							return sendQuestDialog(env, 1352);
						}
					}
					case SETPRO2: {
						qs.setQuestVar(2);
						updateQuestStatus(env);
						return closeDialogWindow(env);
					}
					default:
						break;
				}
			}
		}
		else if (qs.getStatus() == QuestStatus.REWARD) {
			if (targetId == 806258) { // Herodion
				if (dialog == DialogAction.USE_OBJECT) {
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
	public boolean onKillEvent(QuestEnv env) {
		Player player = env.getPlayer();
		QuestState qs = player.getQuestStateList().getQuestState(questId);
		if (qs != null && qs.getStatus() == QuestStatus.START) {
			int var = qs.getQuestVarById(0);
			int var1 = qs.getQuestVarById(1);
			if (var == 2) {
				if (var1 >= 0 && var1 < 0) {
					return defaultOnKillEvent(env, 243795, var1, var1 + 1, 1);
				}
				else if (var1 == 0) {
					qs.setQuestVar(3);
					updateQuestStatus(env);
					return true;
				}
			}
			else if (var == 3) {
				if (var1 >= 0 && var1 < 1) {
					return defaultOnKillEvent(env, navigator, var1, var1 + 1, 1);
				}
				else if (var1 == 1) {
					qs.setQuestVar(4);
					updateQuestStatus(env);
					return true;
				}
			}
			else if (var == 4) {
				if (var1 >= 0 && var1 < 0) {
					return defaultOnKillEvent(env, officer, var1, var1 + 1, 1);
				}
				else if (var1 == 0) {
					qs.setQuestVar(5);
					qs.setStatus(QuestStatus.REWARD); // reward
					updateQuestStatus(env);
					return true;
				}
			}
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
			if (var == 0 && zoneName == ZoneName.get("ASHUNATAL_DREDGION_301650000")) {
				changeQuestStep(env, 0, 1, false);
				return true;
			}
		}
		return false;
	}
}
