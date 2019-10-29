#pragma once

namespace Aspen
{
	class System;
	class Engine;

	class Game : public virtual System
	{
	public:
		Game();
		Game(Engine *);
		virtual ~Game();

		virtual void init();
		virtual void start();
		virtual void run();
		virtual void stop();

		virtual bool isFinished();
	private:
		Engine *_engine;
	};
}