#include "inc/widget.h"

TUI_NAMESPACE_BEGIN

widget::widget(widget* parent)
    : mParent(widget)
{
}

tui::widget::~widget()
{
    if(mParent) mParent->removeChild(this);

    auto children = mChildren;
    mChildren.clear();

    for(widget w : children)
        delete w;
}

void widget::removeChild(widget* w)
{
    mChildren.erase(w);
}

point globalPosition() const
{
    point p = mPosition;

    if(mParent != nullptr)
        p += mParent->globalPosition();

    return p;
}

point position() const
{
    return mPosition;
}

void setPosition(point _p)
{
    mPosition = _p;
}

size size() const
{
    return mSize;
}

void setSize(size _s)
{
    mSize = _s;
}

TUI_NAMESPACE_END
