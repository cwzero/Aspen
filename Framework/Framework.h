#pragma once

namespace Aspen
{
	class System;
	class Platform;

	class Framework : public virtual System
	{
	public:
		Framework();
		Framework(Platform *);
		virtual ~Framework();

		virtual void init();
		virtual void start();
		virtual void run();
		virtual void stop();
	private:
		Platform *_platform;
	};
}