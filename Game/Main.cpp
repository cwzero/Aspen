#include "App/App.h"
#include "Game/Game.h"

void main()
{
	Game *game = new Game();
	App *app = new App(game);
	app->Run();
	delete app;
}