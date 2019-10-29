#include "Platform/System.h"
#include "Platform/Platform.h"
#include "Framework/Framework.h"

using namespace Aspen;

Framework::Framework() : Framework(new Platform())
{

}

Framework::Framework(Platform *p) : System(),
	_platform(p)
{

}

Framework::~Framework()
{
	delete _platform;
}

void Framework::init()
{
	_platform->init();

	System::init();

	// TODO
}

void Framework::start()
{
	_platform->start();

	System::start();

	// TODO
}

void Framework::run()
{
	_platform->run();

	System::run();

	// TODO
}

void Framework::stop()
{
	// TODO

	System::stop();
 
	_platform->stop();
}