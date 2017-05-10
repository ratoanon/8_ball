#include <iostream>
#include <vector>
#include <gl/freeglut.h>
#include "Game.h"
#include "Table.h"

using namespace gameengine;
using namespace mygame;
using namespace std;

vector<Table> gameCharacters;

void createGameCharacters()
{
	Table table(0.0f, 0.0f, 0.0f, 5.0f, 10.0f);

	gameCharacters.push_back(table);
}

void Game::drawScene(void)
{
	for (vector<Table>::iterator it = gameCharacters.begin(); it != gameCharacters.end();	it++) {
		glPushMatrix();
		it->draw(mygame::Table::DrawType::Wire);
		//it->move(0.0001f, 0.0f, 0.0001f);
		glPopMatrix();
	}
}

int main(int argc, char **argv) {
	Game game;
	//Camera camera(0.0f, 0.0f, 0.0f);

	createGameCharacters();

	game.init(0, 0, 600, 600);
	game.run();
	return 0;
}