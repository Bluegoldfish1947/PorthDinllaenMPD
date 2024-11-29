// Turnout definitions
// SERVO_TURNOUT(id, pin, active_position, inactive_position, profile [,"description"])
// id - the id used by DCC-EX
// pin - the actual pin number (100-115 on the first PCA9685)
// active_position - the THROWN position
// inactive_position - the CLOSED position
// profile - the movement speed value: Instant, Fast, Medium, Slow or Bounce
// description - optional and is the name shown in Engine Driver

SERVO_TURNOUT(100, 100, 220, 350, Medium, "Turnout 1")
SERVO_TURNOUT(101, 101, 220, 350, Medium, "Turnout 2")
SERVO_TURNOUT(102, 102, 220, 350, Medium, "Turnout 3")
SERVO_TURNOUT(103, 103, 220, 350, Medium, "Turnout 4")
SERVO_TURNOUT(104, 104, 220, 350, Medium, "Turnout 5")
SERVO_TURNOUT(105, 105, 220, 350, Medium, "Turnout 6")
SERVO_TURNOUT(106, 106, 220, 350, Bounce, "Signal")
