#include "Driver/Driver.h"

using namespace Aspen;

Driver::Driver() : System()
{
	_platform = new Platform();
	_framework = new Framework(_platform);
	_engine = new Engine(_framework);
	_game = new Game(_engine);
}

Driver::~Driver()
{
	delete _game;
}

void Driver::init()
{
	System::init();

	_game->init();
}

void Driver::start()
{
	System::start();

	_game->start();
}

void Driver::run()
{
	System::run();

	_game->run();
}

void Driver::stop()
{
	_game->stop();

	System::stop();
}