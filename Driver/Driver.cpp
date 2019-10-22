#include "Driver/Driver.h"

Driver::Driver(Game *g) : game(g)
{

}

Driver::~Driver() 
{
	delete game;
}

void Driver::SetupEnvironment()
{

}