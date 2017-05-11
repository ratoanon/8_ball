#pragma once

namespace gameengine {

	class Camera {
	public:
		Camera();
		~Camera();
		void cameraSetPosition(double eyex, double eyey, double eyez,
			double dirx, double diry, double dirz,
			double upx, double upy, double upz);
		void cameraTilt(double tilt);
		void cameraPan(double pan);
		void cameraMove(double move);
		void cameraUpdate();

	private:
		double eyex, eyey, eyez;	// Posi��o da c�mara (centro-de-massa)
		double dirx, diry, dirz;	// Vector do sentido de deslocamento da c�mara
		double upx, upy, upz;		// Vector que indica a parte superior da c�mara

		double anglePan, angleTilt;	// �ngulos de Pan e Tilt
		double deltaAnglePan, deltaAngleTilt;
		
		double deltaMove;			// Move para a frente e para tr�s
		double deltaSpeed;			// Aumenta ou diminui a velocidade
		double speed;				// Constante de velocidade de deslocamento
	};
}