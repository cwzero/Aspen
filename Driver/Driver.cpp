#include "Driver/Driver.h"

using namespace Aspen;

Driver::Driver() :
	_app(new App()),
	_engine(new Engine()),
	_framework(new Framework()),
	_game(new Game()),
	_platform(new Platform()),
	_render(new Render())
{

}

Driver::~Driver()
{
	delete _app;
	delete _engine;
	delete _framework;
	delete _game;
	delete _platform;
	delete _render;
}

void Driver::init()
{
	_app->init();
	_engine->init();
	_framework->init();
	_game->init();
	_platform->init();
	_render->init();
}

void Driver::start()
{
	_app->start();
	_engine->start();
	_framework->start();
	_game->start();
	_platform->start();
	_render->start();
}

void Driver::stop()
{
	_app->stop();
	_engine->stop();
	_framework->stop();
	_game->stop();
	_platform->stop();
	_render->stop();
}