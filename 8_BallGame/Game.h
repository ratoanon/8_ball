#pragma once

namespace gameengine {

	class Game
	{
	public:
		Game::Game(int x = 0, int y = 0, int width = 320, int height = 320) : x(x), y(y), screenWidth(width), screenHeight(height) {
			running = false;
		}
		Game::~Game() {}
		void init();
		void init(int x, int y, int width, int height);
		void run(void);

	private:
		static void renderScene(void);			// Funções de callback têm de ser estáticas
		static void changeSize(int w, int h);	// Funções de callback têm de ser estáticas
		static void drawScene(void);

		bool running;
		int x, y, screenWidth, screenHeight;
		int window;
	};
}