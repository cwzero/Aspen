#include "App/App.h"
#include "Game/Game.h"

#include "Driver/Driver.h"

using namespace Aspen;

void main()
{
	Driver *driver = new Driver();

	driver->init();
	driver->start();
	driver->stop();

	delete driver;
}