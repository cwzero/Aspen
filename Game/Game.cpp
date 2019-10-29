#include "Platform/System.h"
#include "Engine/Engine.h"
#include "Game/Game.h"

using namespace Aspen;

Game::Game() : Game(new Engine())
{

}

Game::Game(Engine *e) : System(),
	_engine(e)
{

}

Game::~Game()
{
	delete _engine;
}

void Game::init()
{
	_engine->init();

	System::init();

	// TODO
}

void Game::start()
{
	_engine->start();

	System::start();

	// TODO
}

void Game::run()
{
	_engine->run();

	System::run();

	// TODO
}

void Game::stop()
{
	// TODO

	System::stop();

	_engine->stop();
}

bool Game::isFinished()
{
	return true;
}