#pragma once

#include "Platform/System.h"

namespace Aspen
{
	class App : public virtual System
	{
	public:
		App();
		virtual ~App();

		virtual void init();
		virtual void start();
		virtual void stop();
	private:
	
	};
}