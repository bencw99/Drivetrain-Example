#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
class Drivetrain {
	private:
		TalonSRX topLeftTalon;
		TalonSRX bottomLeftTalon;
		TalonSRX topRightTalon;
		TalonSRX bottomRightTalon;
		
		double forwardSpeed;
		double rotateSpeed;
		
	public:
		typdef enum State {
			IDLE,
			DRIVING
		} state;
		State state;
	
		Drivetrain();
	
		void init();
		void update();
		void disable();
		
		void setSpeed(double forwardSpeed, double rotateSpeed);
}
#endif
