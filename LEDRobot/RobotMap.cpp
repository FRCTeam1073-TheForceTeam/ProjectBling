/* FIRST Team 1073's RobotBuilder (0.0.2) for WPILibExtensions ---
Do not mix this code with any other version of RobotBuilder! */
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
DigitalOutput* RobotMap::bling_BlingRed_Light = NULL;
SpeedController* RobotMap::bling_BlingLight = NULL;
DigitalOutput* RobotMap::bling_BlingBlue_Light = NULL;
DigitalOutput* RobotMap::bling_BlingGreen_Light = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	bling_BlingRed_Light = new DigitalOutput(1, 1);
	
	
	bling_BlingLight = new Jaguar(1, 1);
	lw->AddActuator("Bling_Bling", "Light ", (Jaguar*) bling_BlingLight);
	
	bling_BlingBlue_Light = new DigitalOutput(1, 5);
	
	
	bling_BlingGreen_Light = new DigitalOutput(1, 4);
	
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}