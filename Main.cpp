#include "Platform/System.h"
#include "Engine/Engine.h"
#include "Game/Game.h"
#include "Driver/Driver.h"

using namespace Aspen;

void main()
{
	Driver *driver = new Driver();

	driver->init();
	driver->start();

	do 
	{
		driver->run();
	} while (!driver->isFinished());

	driver->stop();

	delete driver;
}