/* FIRST Team 1073's RobotBuilder (0.0.2) for WPILibExtensions ---
Do not mix this code with any other version of RobotBuilder! */
#include "Brighter.h"
Brighter::Brighter() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::bling_Bling);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void Brighter::Initialize() {
	
}
// Called repeatedly when this Command is scheduled to run
void Brighter::Execute() {
	
	Robot::bling_Bling->raiseBrightness(Bling_Bling::BLUE);
	Robot::bling_Bling->raiseBrightness(Bling_Bling::RED);
	Robot::bling_Bling->raiseBrightness(Bling_Bling::GREEN);
	
}
// Make this return true when this Command no longer needs to run execute()
bool Brighter::IsFinished() {
	return true;
}
// Called once after isFinished returns true
void Brighter::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Brighter::Interrupted() {
}
