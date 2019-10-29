#pragma once

namespace Aspen
{
	class Game;
	class System;
	
	class Driver : public virtual System
	{
	public:
		Driver();
		virtual ~Driver();

		virtual void init();
		virtual void start();
		virtual void run();
		virtual void stop();

		bool isFinished();
	private:
		Game *_game;
	};
}