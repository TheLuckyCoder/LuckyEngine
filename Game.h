#pragma once

#include "System.h"

//Structs
struct GameData : public SystemData
{

};

class Game : public System
{
public:
	Game(const GameData& data);
	virtual ~Game();
};

