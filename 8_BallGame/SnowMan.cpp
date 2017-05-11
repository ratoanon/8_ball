#include <iostream>
#include <gl/freeglut.h>
#include "SnowMan.h"

void SnowMan::draw(DrawType drawType) {
	// Desenha as bolas
	//TRIANGULO
	// --> apenas mudei os valores da cor e translate
	glColor3f(0.3, 0.5, 1);
	glTranslatef(posX, posY, posZ + 1.5f);
	if (drawType == DrawType::Solid) glutSolidSphere(0.75, 60, 60);
	else glutWireSphere(0.25, 10, 10);

	glColor3f(1, 1, 0.0f);
	glTranslatef(posX + 0.3f, posY + 0.4f, posZ);
	if (drawType == DrawType::Solid) glutSolidSphere(0.75, 60, 60);
	else glutWireSphere(0.25, 10, 10);

	glColor3f(1, 0, 1);
	glTranslatef(posX + 0.2f, posY - 0.4f, posZ);
	if (drawType == DrawType::Solid) glutSolidSphere(0.75, 60, 60);
	else glutWireSphere(0.25, 10, 10);

	glColor3f(0, 1, 1);
	glTranslatef(posX + 0.3f, posY + 0.45f, posZ);
	if (drawType == DrawType::Solid) glutSolidSphere(0.75, 60, 60);
	else glutWireSphere(0.25, 10, 10);

	glColor3f(0, 0, 0);
	glTranslatef(posX + 0.2f, posY - .45f, posZ);
	if (drawType == DrawType::Solid) glutSolidSphere(0.75, 60, 60);
	else glutWireSphere(0.25, 10, 10);

	glColor3f(0, 0.2, 0.7);
	glTranslatef(posX - 0.45f, posY + 0.75f, posZ);
	if (drawType == DrawType::Solid) glutSolidSphere(0.75, 60, 60);
	else glutWireSphere(0.25, 10, 10);

	/*// Desenha a cabeça
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
	glutSolidCone(size*0.08, size*0.5, 10, 2);*/
}

void SnowMan::move(float dx, float dy, float dz) {
	posX += dx;
	posY += dy;
	posZ += dz;
}