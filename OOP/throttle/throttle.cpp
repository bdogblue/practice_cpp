#include <cassert>
#include "throttle.h"

namespace main_bdog_2A
{
    throttle::throttle()
    {
        top_position = 1;
        position = 0;
    }

    throttle::throttle(int size)
    {
        assert(size > 0);
        top_position = size;
        position = 0;
    }

    void throttle::shift(int amount)
    {
        position += amount;

        if (position < 0)
            position = 0;
        else if (position > top_position)
            position = top_position;
    }
}