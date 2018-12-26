#ifndef _tui_vec2_h_
#define _tui_vec2_h_

#include "tui/global.h"

TUI_NAMESPACE_BEGIN

template<typename T>
class vec2
{
public:
    vec2()
    {}

    vec2(T a, T b)
    : mA(a)
    , mB(b)
    {}

protected:
    T mA = 0;
    T mB = 0;
};

TUI_NAMESPACE_END

#endif // _tui_vec2_h_
