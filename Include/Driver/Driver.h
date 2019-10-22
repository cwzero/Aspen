#pragma once

#include "Game/Game.h"

class Driver 
{
public:
	Driver(Game *game);
	~Driver();

	void SetupEnvironment();
private:
	Game *game;
};