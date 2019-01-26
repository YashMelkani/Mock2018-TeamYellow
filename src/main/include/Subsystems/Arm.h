/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include "ctre/Phoenix.h"
#include "WPILib.h"

class Arm : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  TalonSRX* armMotor;
  double speed;
  bool isStopped;
 public:
  Arm();
  void moveArm(double s);
  void InitDefaultCommand() override;
  bool getArmStoppedStatus();
  void switchArmStoppedStatus();
};
