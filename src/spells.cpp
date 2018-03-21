/**
 * The Forgotten Server - a free and open-source MMORPG server emulator
 * Copyright (C) 2016  Mark Samman <mark.samman@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "otpch.h"

#include "combat.h"
#include "configmanager.h"
#include "game.h"
//#include "monster.h"
#include "pugicast.h"
#include "spells.h"

extern Game g_game;
extern Spells* g_spells;
//extern Monsters g_monsters;
extern Vocations g_vocations;
extern ConfigManager g_config;
extern LuaEnvironment g_luaEnvironment;

Spells::Spells()
{
	scriptInterface.initState();
}

Spells::~Spells()
{
	clear();
}

TalkActionResult_t Spells::playerSaySpell(Player* player, std::string& words)
{
	return TALKACTION_CONTINUE;
}

void Spells::clear()
{
}

LuaScriptInterface& Spells::getScriptInterface()
{
	return scriptInterface;
}

std::string Spells::getScriptBaseName() const
{
	return "spells";
}

Event* Spells::getEvent(const std::string& nodeName)
{
	return nullptr;
}

bool Spells::registerEvent(Event* event, const pugi::xml_node&)
{
	return false;
}

Spell* Spells::getSpellByName(const std::string& name)
{
	return 0;
}

RuneSpell* Spells::getRuneSpell(uint32_t id)
{
	return 0;
}

RuneSpell* Spells::getRuneSpellByName(const std::string& name)
{
	
	return nullptr;
}

InstantSpell* Spells::getInstantSpell(const std::string& words)
{
	return nullptr;
}

uint32_t Spells::getInstantSpellCount(const Player* player) const
{
	
	return true;
}

InstantSpell* Spells::getInstantSpellByIndex(const Player* player, uint32_t index)
{
	
	return nullptr;
}

InstantSpell* Spells::getInstantSpellByName(const std::string& name)
{
	
	return nullptr;
}

Position Spells::getCasterPosition(Creature* creature, Direction dir)
{
	return getNextPosition(dir, creature->getPosition());
}

bool CombatSpell::loadScriptCombat()
{
	
}

bool CombatSpell::castSpell(Creature* creature)
{
	return true;
}

bool CombatSpell::castSpell(Creature* creature, Creature* target)
{
	
	return true;
}

bool CombatSpell::executeCastSpell(Creature* creature, const LuaVariant& var)
{
	
	return scriptInterface->callFunction(2);
}

bool Spell::configureSpell(const pugi::xml_node& node)
{
	
	return true;
}

bool Spell::playerSpellCheck(Player* player) const
{

	return true;
}

bool Spell::playerInstantSpellCheck(Player* player, const Position& toPos)
{
	
	return true;
}

bool Spell::playerRuneSpellCheck(Player* player, const Position& toPos)
{
	
	return true;
}

void Spell::postCastSpell(Player* player, bool finishedCast /*= true*/, bool payCost /*= true*/) const
{
	
}

void Spell::postCastSpell(Player* player, uint32_t manaCost, uint32_t soulCost)
{
	
}

uint32_t Spell::getManaCost(const Player* player) const
{
	return 0;
}

ReturnValue Spell::CreateIllusion(Creature* creature, const Outfit_t& outfit, int32_t time)
{
	return RETURNVALUE_NOERROR;
}

ReturnValue Spell::CreateIllusion(Creature* creature, const std::string& name, int32_t time)
{
	return RETURNVALUE_NOERROR;
}

ReturnValue Spell::CreateIllusion(Creature* creature, uint32_t itemId, int32_t time)
{
	return RETURNVALUE_NOERROR;
}

std::string InstantSpell::getScriptEventName() const
{
	return "onCastSpell";
}

bool InstantSpell::configureEvent(const pugi::xml_node& node)
{
	
	return true;
}

bool InstantSpell::loadFunction(const pugi::xml_attribute& attr)
{
	return true;
}

bool InstantSpell::playerCastInstant(Player* player, std::string& param)
{
	return true;
}

bool InstantSpell::canThrowSpell(const Creature* creature, const Creature* target) const
{
	
	return true;
}

bool InstantSpell::castSpell(Creature* creature)
{
	
	return true;
}

bool InstantSpell::castSpell(Creature* creature, Creature* target)
{
		return castSpell(creature);
	
}

bool InstantSpell::internalCastSpell(Creature* creature, const LuaVariant& var)
{
	return false;
}

bool InstantSpell::executeCastSpell(Creature* creature, const LuaVariant& var)
{
	return true;
}


bool InstantSpell::SearchPlayer(const InstantSpell*, Creature* creature, const std::string& param)
{
	
	return true;
}

bool InstantSpell::SummonMonster(const InstantSpell* spell, Creature* creature, const std::string& param)
{
	return true;
}

bool InstantSpell::Levitate(const InstantSpell*, Creature* creature, const std::string& param)
{
	
	return true;
}

bool InstantSpell::Illusion(const InstantSpell*, Creature* creature, const std::string& param)
{
	
	return true;
}

bool InstantSpell::canCast(const Player* player) const
{
	return false;
}

std::string ConjureSpell::getScriptEventName() const
{
	return "onCastSpell";
}

bool ConjureSpell::configureEvent(const pugi::xml_node& node)
{
	
	return true;
}

bool ConjureSpell::loadFunction(const pugi::xml_attribute&)
{
	return true;
}

bool ConjureSpell::conjureItem(Creature* creature) const
{
	return true;
}

bool ConjureSpell::playerCastInstant(Player* player, std::string& param)
{
	return conjureItem(player);
}

std::string RuneSpell::getScriptEventName() const
{
	return "onCastSpell";
}

bool RuneSpell::configureEvent(const pugi::xml_node& node)
{
	return true;
}

bool RuneSpell::loadFunction(const pugi::xml_attribute& attr)
{
	return true;
}

bool RuneSpell::Illusion(const RuneSpell*, Player* player, const Position& posTo)
{
	return true;
}

bool RuneSpell::Convince(const RuneSpell* spell, Player* player, const Position& posTo)
{
	return true;
}

ReturnValue RuneSpell::canExecuteAction(const Player* player, const Position& toPos)
{
	return RETURNVALUE_NOERROR;
}

bool RuneSpell::executeUse(Player* player, Item* item, const Position&, Thing* target, const Position& toPosition, bool isHotkey)
{
	return true;
}

bool RuneSpell::castSpell(Creature* creature)
{
	return true;
}

bool RuneSpell::castSpell(Creature* creature, Creature* target)
{
	return true;
}

bool RuneSpell::internalCastSpell(Creature* creature, const LuaVariant& var, bool isHotkey)
{
	return true;
}

bool RuneSpell::executeCastSpell(Creature* creature, const LuaVariant& var, bool isHotkey)
{
	return true;
}
