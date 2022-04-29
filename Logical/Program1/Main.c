
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed=speedBtn;
	DRIVE.ENABLE=0;
}

void _CYCLIC ProgramCyclic(void)
{
	speed = speedBtn;
	DRIVE.ENABLE = ENABLED;
	drive(&DRIVE);
}

void _EXIT ProgramExit(void)
{

}

