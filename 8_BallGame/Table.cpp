#include <iostream>
#include <gl/freeglut.h>
#include "Table.h"

namespace mygame {

	void Table::draw(DrawType drawType) {
		drawField();

		// Desenha as bolas
		//TRIANGULO
		// --> apenas mudei os valores da color e translate
		glColor3f(0.3f, 0.5f, 1.0f);
		glTranslatef(posX, posY, posZ + 1.5f);
		if (drawType == DrawType::Solid) glutSolidSphere(0.25, 60, 60);
		else glutWireSphere(0.25, 10, 10);

		glColor3f(1, 1, 0.0f);
		glTranslatef(posX + 0.3f, posY + 0.4f, posZ);
		if (drawType == DrawType::Solid) glutSolidSphere(0.25, 60, 60);
		else glutWireSphere(0.25, 10, 10);

		glColor3f(1, 0, 1);
		glTranslatef(posX + 0.2f, posY - 0.4f, posZ);
		if (drawType == DrawType::Solid) glutSolidSphere(0.25, 60, 60);
		else glutWireSphere(0.25, 10, 10);

		glColor3f(0, 1, 1);
		glTranslatef(posX + 0.3f, posY + 0.45f, posZ);
		if (drawType == DrawType::Solid) glutSolidSphere(0.25, 60, 60);
		else glutWireSphere(0.25, 10, 10);

		glColor3f(0, 0, 0);
		glTranslatef(posX + 0.2f, posY - .45f, posZ);
		if (drawType == DrawType::Solid) glutSolidSphere(0.25, 60, 60);
		else glutWireSphere(0.25, 10, 10);

		glColor3f(0, 0.2f, 0.7f);
		glTranslatef(posX - 0.45f, posY + 0.75f, posZ);
		if (drawType == DrawType::Solid) glutSolidSphere(0.25, 60, 60);
		else glutWireSphere(0.25, 10, 10);
	} 

	void Table::drawField() {
		glBegin(GL_QUADS);
		glColor3f(0.0f, 0.5f, 0.0f);
		glVertex3f(posX + width / 2, posY - height / 2, posZ);
		glVertex3f(posX + width / 2, posY + height / 2, posZ);
		glVertex3f(posX - width / 2, posY + height / 2, posZ);
		glVertex3f(posX - width / 2, posY - height / 2, posZ);
		glEnd();
	}
}