#include <iostream>
#include <gl/freeglut.h>
#include "Table.h"

namespace mygame {

	void Table::draw() {
		drawField();
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