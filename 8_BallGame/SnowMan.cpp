#include <iostream>
#include <gl/freeglut.h>
#include "SnowMan.h"

void SnowMan::draw(DrawType drawType) {
	// Desenha o tronco
	glColor3f(red, green, blue);
	glTranslatef(posX, posY + size*0.75f, posZ);
	if (drawType == DrawType::Solid) glutSolidSphere(size*0.75, 60, 60);
	else glutWireSphere(size*0.75, 10, 10);

	// Desenha a cabeça
	glTranslatef(0.0f, size*1.0f, 0.0f);
	if (drawType == DrawType::Solid) glutSolidSphere(size*0.25, 30, 30);
	else glutWireSphere(size*0.25, 10, 10);

	// Desenha os olhos
	glPushMatrix();
	glColor3f(0.0f, 0.0f, 0.0f);
	glTranslatef(size*0.05f, size*0.10f, size*0.18f);
	glutSolidSphere(size*0.05, 10, 10);
	glTranslatef(size*-0.1f, 0.0f, 0.0f);
	glutSolidSphere(size*0.05, 10, 10);
	glPopMatrix();

	// Desenha o nariz
	glColor3f(1.0f, 0.5f, 0.5f);
	glutSolidCone(size*0.08, size*0.5, 10, 2);
}

void SnowMan::move(float dx, float dy, float dz) {
	posX += dx;
	posY += dy;
	posZ += dz;
}