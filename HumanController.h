class HumanController {
	private:
		Joystick stick;
		Robot *robot;
	public:
		HumanController(Robot *robot);	
	
		void init();
		void update();
		void disable();
}

void HumanController::update() {
	robot->setSpeed(stick.GetX(), stick.GetY());
}
