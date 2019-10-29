#pragma once

namespace Aspen
{
	class System;

	class Platform : public virtual System
	{
	public:
		Platform();
		virtual ~Platform();

		virtual void init();
		virtual void start();
		virtual void run();
		virtual void stop();
	private:
	
	};
}