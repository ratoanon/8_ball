#pragma once

class SnowMan {
public:
	enum class DrawType { Solid, Wire };
	SnowMan(float r, float g, float b, float x, float y, float z, float size) :
		red(r), green(r), blue(b), posX(x), posY(y), posZ(z), size(size) {
		std::cout << "Cria Snowman!\n";
	}
	~SnowMan() { std::cout << "Destroi Snowman!\n"; }
	void draw(DrawType drawType);
	void move(float dx, float dy, float dz);
	void setColor(float r, float g, float b) { red = r; green = g; blue = b; }

private:
	float red, green, blue; // Cor do Boneco de Neve
	float posX, posY, posZ; // Posição do Boneco de Neve
	float size; // Tamanho do Boneco de Neve
};