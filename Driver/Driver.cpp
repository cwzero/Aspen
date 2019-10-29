#include "Platform/System.h"
#include "Driver/Driver.h"
#include "Game/Game.h"

using namespace Aspen;

Driver::Driver() : System(),
_game(new Game())
{
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

bool Driver::isFinished()
{
	return _game->isFinished();
}