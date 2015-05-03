#include "Drivetrain.h"
#include "WPILib.h"

#ifndef ROBOT_H
#define ROBOT_H

class Robot {
	private:
		Drivetrain drivetrain;
	public:
		Robot();
	
		void init();
		void update();
		void disable();
	
		void setSpeed(double forwardSpeed, double rotateSpeed);
};
#endif
