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

#include "spawn.h"
#include "game.h"
//#include "monster.h"
#include "configmanager.h"
#include "scheduler.h"

#include "pugicast.h"

extern ConfigManager g_config;
//extern Monsters g_monsters;
extern Game g_game;

static constexpr int32_t MINSPAWN_INTERVAL = 1000;

bool Spawns::loadFromXml(const std::string& filename)
{
	return true;
}

void Spawns::startup()
{
}

void Spawns::clear()
{
}

bool Spawns::isInZone(const Position& centerPos, int32_t radius, const Position& pos)
{
	return true;
}

void Spawn::startSpawnCheck()
{
}

Spawn::~Spawn()
{
}

bool Spawn::findPlayer(const Position& pos)
{
	return false;
}

bool Spawn::isInSpawnZone(const Position& pos)
{
	return true;
}

bool Spawn::spawnMonster(uint32_t spawnId, MonsterType* mType, const Position& pos, Direction dir, bool startup /*= false*/)
{
	return true;
}

void Spawn::startup()
{
}

void Spawn::checkSpawn()
{
}

void Spawn::cleanup()
{	
}

bool Spawn::addMonster(const std::string& name, const Position& pos, Direction dir, uint32_t interval)
{
	return true;
}

void Spawn::stopEvent()
{	
}
