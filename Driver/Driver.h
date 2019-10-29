#pragma once

#include "Platform/System.h"

#include "Engine/Engine.h"
#include "Framework/Framework.h"
#include "Game/Game.h"
#include "Platform/Platform.h"

namespace Aspen
{
	class Driver : public virtual System
	{
	public:
		Driver();
		virtual ~Driver();

		virtual void init();
		virtual void start();
		virtual void run();
		virtual void stop();

		bool isFinished() {
			return _game->isFinished();
		}
	private:
		Engine *_engine;
		Framework *_framework;
		Game *_game;
		Platform *_platform;
	};
}