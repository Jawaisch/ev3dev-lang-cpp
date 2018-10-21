#include "ev3dev.h"

using namespace ev3dev;

#include <stdio.h>

enum state
  {
    state_idle,
    state_driving,
    state_turning
};

int main()
{
    printf("Hello world!\n");

	large_motor _motor_a;
	state _state;
	bool _terminate;

	_motor_a(OUTPUT_A),
	//_state(state_idle),
	//_terminate(false)

	_motor_a.set_speed_sp(15);
	_motor_a.run_forever();

	for(int i = 0; i<10000; i++);

	_motor_a.stop();

    return 0;
}
