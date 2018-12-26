#ifndef _tui_point_h_
#define _tui_point_h_

#include "tui/global.h"
#include "tui/vec2.h"

TUI_NAMESPACE_BEGIN

class point: public vec2<int>
{
public:
    point()
    : vec2(0, 0)
    {
    }
    
    point(int _x, int _y)
    : vec2(_x, _y)
    {
    }

    int& x = mA;
    int& y = mB;
};

TUI_NAMESPACE_END

#endif // _tui_point_h_
