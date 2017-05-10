#pragma once
#include "Game.h"
#include "Table.h"

using namespace gameengine;
using namespace mygame;
using namespace std;

void drawSceneGame1(void) {
	glPushMatrix();
	
	glPopMatrix();
}

class Game1 : public Game { public: void gameSetWindowCallbacks(int windowID); };

void Game1::gameSetWindowCallbacks(int windowID) {
	for (int i = 0; i < int(gameMainWindows.size()); i++) {
		if (gameMainWindows[i].windowId == windowID) {
			glutSetWindowData((void *)&gameMainWindows[i]);
			break;
		}
	}

	glutDisplayFunc([](void) {
		MainWindow *currentWindow = (MainWindow *)glutGetWindowData();
		glutSetWindow(currentWindow->windowId);
		if (currentWindow->windowId == 1)
			currentWindow->windowId = currentWindow->windowId;
		glClearColor(0.0, 0.0, 0.0, 0.0);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		currentWindow->camera.cameraUpdate();

		drawSceneGame1();

		glutSwapBuffers();
	});

	glutReshapeFunc([](int w, int h) {
		MainWindow *currentWindow = (MainWindow *)glutGetWindowData();
		glutSetWindow(currentWindow->windowId);

		// Previne a divis�o por zero
		if (h == 0) h = 1;
		double ratio = 1.0 * double(w) / double(h);

		// O viewport ocupar� toda a janela
		glViewport(0, 0, w, h);

		// Efetua o reset do sistema de coordenadas
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();

		// Aplica a perspectiva
		gluPerspective(45.0, ratio, 0.1, 100.0);

		// Altera o sistema de coordenadas, para GL_MODELVIEW
		glMatrixMode(GL_MODELVIEW);
	});

	glutKeyboardFunc([](unsigned char key, int x, int y) {
		MainWindow *currentWindow = (MainWindow *)glutGetWindowData();
		glutSetWindow(currentWindow->windowId);

		if (key == 27 /* ESC */) glutLeaveMainLoop();
	});

	glutKeyboardUpFunc([](unsigned char key, int x, int y) {

	});

	glutSpecialFunc([](int key, int x, int y) {

	});

	glutSpecialUpFunc([](int key, int x, int y) {

	});

	glutMouseFunc([](int button, int state, int x, int y) {

	});

	glutMotionFunc([](int x, int y) {

	});

	glutPassiveMotionFunc([](int x, int y) {

	});

	glutEntryFunc([](int state) {

	});

	glutMouseWheelFunc([](int wheel, int direction, int x, int y) {

	});
}
