#ifndef _tui_isurface_h_
#define _tui_isurface_h_

#include "tui/global.h"
#include "tui/size.h"

TUI_NAMESPACE_BEGIN

class iscreen
{
public:
    virtual void setPixel();
private:
    size mSize;
};

TUI_NAMESPACE_END

#endif // _tui_isurface_h_
