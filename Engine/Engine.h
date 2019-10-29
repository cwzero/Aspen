#pragma once

namespace Aspen
{
	class System;
	class Framework;

	class Engine : public virtual System
	{
	public:
		Engine(Framework *);
		virtual ~Engine();

		virtual void init();
		virtual void start();
		virtual void run();
		virtual void stop();
	private:
		Framework *_framework;
	};
}