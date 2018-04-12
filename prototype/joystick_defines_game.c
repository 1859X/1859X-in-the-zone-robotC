#ifndef _JOYSTICK_
#define _JOYSTICK_

#define TANK_CONTORL_LEFT        vexRT[Ch3]
#define TANK_CONTORL_RIGHT       vexRT[Ch2]

// each one of these defines is a boolian statement
// that determines if the controls in other files should run

#define FLIP_LIFT_UP             vexRT[Btn5D]
#define FLIP_LIFT_DOWN           vexRT[Btn5U]

#define CORE_LIFT_UP             vexRT[Btn6U]
#define CORE_LIFT_DOWN           vexRT[Btn6D]

#define LIFT_CLAW_UP             vexRT[Btn8D]
#define LIFT_CLAW_DOWN           vexRT[Btn8R]

#define MANIPULATOR_UP           vexRT[Btn7D]
#define MANIPULATOR_DOWN         vexRT[Btn7L]
#define MANIPULATOR_DOWN_FAST    vexRT[Btn7U]
#define MANIPULATOR_UP_FAST      vexRT[Btn7R]





#endif
