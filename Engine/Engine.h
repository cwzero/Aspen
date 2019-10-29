#pragma once

#include "Platform/System.h"

namespace Aspen
{
	class Engine : public virtual System
	{
	public:
		Engine();
		virtual ~Engine();

		virtual void init();
		virtual void start();
		virtual void stop();
	private:
	
	};
}