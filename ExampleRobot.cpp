#include "Robot.h"
#include "WPILib.h"

class ExampleRobot : IterativeRobot{
	private:
		Robot robot;
		HumanController humanController;
	public:
		void TeleopInit();
		void TeleopPeriodic();
		void TeleopDisable();
}

void ExampleRobot::TeleopInit() {
	robot.init();
	humanController.init();
}

void ExampleRobot::TeleopPeriodic() {
	robot.update();
	humanController.update();
}

void ExampleRobot::TeleopDisable() {
	robot.disable();
	humanController.disable();
}
