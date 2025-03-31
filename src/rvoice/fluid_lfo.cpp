#include "fluid_lfo.h"

DECLARE_FLUID_RVOICE_FUNCTION(fluid_lfo_set_incr)
{
    auto lfo = static_cast<fluid_lfo_t *>(obj);
    fluid_real_t increment = param[0].real;

    lfo->increment = increment;
}

DECLARE_FLUID_RVOICE_FUNCTION(fluid_lfo_set_delay)
{
    auto lfo = static_cast<fluid_lfo_t *>(obj);
    unsigned int delay = param[0].i;

    lfo->delay = delay;
}
