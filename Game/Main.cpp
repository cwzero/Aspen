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