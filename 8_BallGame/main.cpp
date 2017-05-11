/****************************PROGRAMA-CPP-BASE-SNOWMAN***************************/
/* Descrição:																	*/
/* Desenha duas janelas independentes.											*/
/********************************************************************************/

#include "Game1.h"

int main(int argc, char **argv) {
	createGameCharacters();

	Game1 game;
	int wId = game.gameAddMainWindow(0, 0, 800, 600, "Main Window 1");
	game.gameCameraSetPosition(wId, 0.0, 1.0, 5.0, 0.0, 0.0, -1.0, 0.0, 1.0, 0.0);
	game.gameSetWindowCallbacks(wId);

	// Esta função é geral para o freeglut
	/*glutIdleFunc([](void) {
		// Colocar aqui o código que se pretenda executar sempre que não existires outros eventos
	});*/

	// Definir o FPS (É comum a todas as janelas)
	Game::gameSetTimerFPS(100);
	// Inicia o lançamento de eventos de display, para cada janela, de acordo com o FPS definido
	Game::gameTimerRun(wId);

	// Entra no ciclo de gestão da aplicação por eventos
	Game::gameRun();

	return 0;
}