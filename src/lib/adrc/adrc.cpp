/****************************************************************************
 *
 *
 ****************************************************************************/

/**
 * @file pid.c
 *
 * Implementation of generic PID controller.
 *
 * @author Laurens Mackay <mackayl@student.ethz.ch>
 * @author Tobias Naegeli <naegelit@student.ethz.ch>
 * @author Martin Rutschmann <rutmarti@student.ethz.ch>
 * @author Anton Babushkin <anton.babushkin@me.com>
 * @author Julian Oes <joes@student.ethz.ch>
 */

#include "ADRC.h"
#include <math.h>
#include <px4_platform_common/defines.h>

#define SIGMA 0.000001f


