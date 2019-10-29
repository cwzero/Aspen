#pragma once

#include "Platform/System.h"

namespace Aspen
{
	class Game : public virtual System
	{
	public:
		Game();
		virtual ~Game();

		virtual void init();
		virtual void start();
		virtual void stop();	
	private:

	};
}