#include "Platform/System.h"
#include "Framework/Framework.h"
#include "Engine/Engine.h"

using namespace Aspen;

Engine::Engine(Framework *f) : System(),
	_framework(f)
{

}

Engine::~Engine()
{
	delete _framework;
}

void Engine::init()
{
	_framework->init();

	System::init();

	// TODO
}

void Engine::start()
{
	_framework->start();

	System::start();

	// TODO
}

void Engine::run()
{
	_framework->run();

	System::run();

	// TODO
}

void Engine::stop()
{
	// TODO

	System::stop();
    
	_framework->stop();
}