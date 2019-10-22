#include "App/App.h"

App::App(Game *g) : driver(new Driver(g))
{

}

App::~App()
{
	delete driver;
}

void App::Run()
{
	driver->SetupEnvironment();
}