// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/DriveWithJoystick.h"
#include "Commands/LiftWithJoysticks.h"
#include "Commands/autoCmd1.h"
#include "Commands/autoDrive.h"
#include "Commands/autoLowerLift.h"
#include "Commands/autoRaiseLift.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	driveStick = new Joystick(0);
	
	gamePad = new Joystick(1);
	
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("LiftWithJoysticks", new LiftWithJoysticks());

	SmartDashboard::PutData("DriveWithJoystick", new DriveWithJoystick());

	SmartDashboard::PutData("autoDrive", new autoDrive());

	SmartDashboard::PutData("autoRaiseLift", new autoRaiseLift());

	SmartDashboard::PutData("autoCmd1", new autoCmd1());

	SmartDashboard::PutData("autoLowerLift", new autoLowerLift());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getdriveStick() {
	return driveStick;
}

Joystick* OI::getgamePad() {
	return gamePad;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
