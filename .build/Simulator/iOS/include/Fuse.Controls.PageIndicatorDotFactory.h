// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.18.8/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.IFactory.h>
namespace g{namespace Fuse{namespace Controls{struct PageIndicatorDotFactory;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class PageIndicatorDotFactory :1705
// {
struct PageIndicatorDotFactory_type : uType
{
    ::g::Uno::UX::IFactory interface0;
};

PageIndicatorDotFactory_type* PageIndicatorDotFactory_typeof();
void PageIndicatorDotFactory__ctor__fn(PageIndicatorDotFactory* __this);
void PageIndicatorDotFactory__New1_fn(PageIndicatorDotFactory* __this, uObject** __retval);
void PageIndicatorDotFactory__New2_fn(PageIndicatorDotFactory** __retval);

struct PageIndicatorDotFactory : uObject
{
    void ctor_();
    uObject* New1();
    static PageIndicatorDotFactory* New2();
};
// }

}}} // ::g::Fuse::Controls
