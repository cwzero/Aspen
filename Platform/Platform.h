#pragma once

#include "Platform/System.h"

namespace Aspen
{
	class Platform : public virtual System
	{
	public:
		Platform();
		virtual ~Platform();

		virtual void init();
		virtual void start();
		virtual void stop();
	private:
	
	};
}