#pragma once

#include "Platform/System.h"

namespace Aspen
{
	class Framework : public virtual System
	{
	public:
		Framework();
		virtual ~Framework();

		virtual void init();
		virtual void start();
		virtual void stop();
	private:

	};
}