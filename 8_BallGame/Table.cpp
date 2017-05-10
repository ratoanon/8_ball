#include <iostream>
#include <gl/freeglut.h>
#include "Table.h"

namespace mygame {

	void Table::draw(DrawType drawType) {
		drawField();

	 // Desenha o tronco
		glColor3f(1, 1, 1);
		glTranslatef(posX, posY, posZ+1.5);
		if (drawType == DrawType::Solid) glutSolidSphere(0.75, 60, 60);
		else glutWireSphere(0.75, 10, 10);

	/*	// Desenha a cabeça
		glTranslatef(0.0f, 1.0f, 0.0f);
		if (drawType == DrawType::Solid) glutSolidSphere(0.25, 30, 30);
		else glutWireSphere(0.25, 10, 10);

		// Desenha os olhos
		glPushMatrix();
		glColor3f(0.0f, 0.0f, 0.0f);
		glTranslatef(0.05f, 0.10f, 0.18f);
		glutSolidSphere(0.05, 10, 10);
		glTranslatef(-0.1f, 0.0f, 0.0f);
		glutSolidSphere(0.05, 10, 10);
		glPopMatrix();

		// Desenha o nariz
		glColor3f(1.0f, 0.5f, 0.5f);
		glutSolidCone(0.08, 0.5, 10, 2);
		*/
	} 

	void Table::drawField() {
		glBegin(GL_QUADS);
		glColor3f(0.0f, 0.5f, 0.0f);
		glVertex3f(posX + width / 2, posY - height / 2, posZ);
		glVertex3f(posX + width / 2, posY + height / 2, posZ);
		glVertex3f(posX - width / 2, posY  + height / 2, posZ);
		glVertex3f(posX - width / 2, posY - height / 2, posZ);
		glEnd();
	}

	/*
	void SnowMan::move(float dx, float dy, float dz) {
		posX += dx;
		posY += dy;
		posZ += dz;
	} */
}