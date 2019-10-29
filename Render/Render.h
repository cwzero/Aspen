#pragma once

#include "Platform/System.h"

namespace Aspen
{
	class Render : public virtual System
	{
	public:
		Render();
		virtual ~Render();

		virtual void init();
		virtual void start();
		virtual void stop();
	private:

	};
}