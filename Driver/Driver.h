#pragma once

#include "Platform/System.h"

#include "App/App.h"
#include "Engine/Engine.h"
#include "Framework/Framework.h"
#include "Game/Game.h"
#include "Platform/Platform.h"
#include "Render/Render.h"

namespace Aspen
{
	class Driver : public virtual System
	{
	public:
		Driver();
		virtual ~Driver();

		virtual void init();
		virtual void start();
		virtual void stop();
	private:
		App *_app;
		Engine *_engine;
		Framework *_framework;
		Game *_game;
		Platform *_platform;
		Render *_render;
	};
}