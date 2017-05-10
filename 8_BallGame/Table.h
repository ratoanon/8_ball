#pragma once

namespace mygame {

	class Table {
	public:
		enum class DrawType { Solid, Wire };
		Table(float x, float y, float z, float w, float h) :
			posX(x), posY(y), posZ(z), width(w), height(h) {
			std::cout << "Cria Snowman!\n";
		}
		~Table() { std::cout << "Destroi Snowman!\n"; }
		void draw();
		//void move(float dx, float dy, float dz);
		void drawField();

	private:
		float posX, posY, posZ; 
		float width, height; 
	};
}