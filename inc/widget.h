#ifndef _tui_widget_h_
#define _tui_widget_h_

#include "tui/global.h"

#include "tui/size.h"
#include "tui/point.h"

#include <set>

TUI_NAMESPACE_BEGIN

class widget
{
public:
    explicit widget(widget* parent = nullptr);
    ~widget();

    point globalPosition() const;
    point position() const;
    void setPosition(point);

    size size() const;
    void setSize(size);

private:
    widget* mParent = nullptr;
    std::list<widget*> mChildren;

    point mPosition;
    size mSize;

    void removeChild(widget* w);
};

TUI_NAMESPACE_END

#endif // _tui_widget_h_
