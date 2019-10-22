#pragma once

#include "Driver/Driver.h"
#include "Game/Game.h"

class App 
{
public:
	App(Game *game);
	~App();

	void Run();
private:
	Driver *driver;
};