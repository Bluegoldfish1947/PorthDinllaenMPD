/*
Turnout definitions
SERVO_TURNOUT(id, pin, active_position, inactive_position, profile [,"description"])
id - the id used by DCC-EX
pin - the actual pin number (100-115 on the first PCA9685)
active_position - the THROWN position
inactive_position - the CLOSED position
profile - the movement speed value: Instant, Fast, Medium, Slow or Bounce
description - optional and is the name shown in Engine Driver

For setup purposes both active_position and inactive_position are set to 300 (~midpoint)
// The EX-Toolbox app can then be used to fine tune the actual movement
*/

// SETUP
SERVO_TURNOUT(100, 100, 450, 150, Medium, "Turnout 1")
SERVO_TURNOUT(101, 101, 350, 180, Medium, "Turnout 2")
SERVO_TURNOUT(102, 102, 409, 202, Medium, "Turnout 6")
SERVO_TURNOUT(103, 103, 480, 280,  Medium, "Turnout 5")
SERVO_TURNOUT(104, 104, 480, 250, Medium, "Turnout 3")
SERVO_TURNOUT(105, 105, 470, 200, Medium, "Turnout 4")
SERVO_TURNOUT(106, 106, 210, 300, Bounce, "Signal")

// RUNNING
/*SERVO_TURNOUT(100, 100, 200, 390, Medium, "Turnout 1")
SERVO_TURNOUT(101, 101, 250, 370, Medium, "Turnout 2")
SERVO_TURNOUT(102, 102, 250, 380, Medium, "Turnout 3")
SERVO_TURNOUT(103, 103, 200, 355, Medium, "Turnout 4")
SERVO_TURNOUT(104, 104, 250, 410, Medium, "Turnout 5")
SERVO_TURNOUT(105, 105, 300, 410, Medium, "Turnout 6")
SERVO_TURNOUT(106, 106, 290, 400, Bounce, "Signal")
*/

