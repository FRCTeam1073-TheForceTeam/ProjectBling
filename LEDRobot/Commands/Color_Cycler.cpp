/* FIRST Team 1073's RobotBuilder (0.0.2) for WPILibExtensions ---
Do not mix this code with any other version of RobotBuilder! */
#include "Color_Cycler.h"
int Color_Cycler::newcolor = 0;
Color_Cycler::Color_Cycler() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::bling_Bling);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void Color_Cycler::Initialize() {
	
	
}
// Called repeatedly when this Command is scheduled to run
void Color_Cycler::Execute() {
	Robot::bling_Bling->setLed(newcolor);
	printf("color=%d\n", newcolor);	
	newcolor++;
	if (newcolor > Bling_Bling::WHITE){
		newcolor = Bling_Bling::BLUE;
	}

}
// Make this return true when this Command no longer needs to run execute()
bool Color_Cycler::IsFinished() {
	return true;
}
// Called once after isFinished returns true
void Color_Cycler::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Color_Cycler::Interrupted() {
}