// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.18.8/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct DisplayHelpers;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal static class DisplayHelpers :395
// {
uClassType* DisplayHelpers_typeof();
void DisplayHelpers__get_DisplaySizeHint_fn(::g::Uno::Int2* __retval);
void DisplayHelpers__get_PointDensity_fn(float* __retval);

struct DisplayHelpers : uObject
{
    static ::g::Uno::Int2 DisplaySizeHint();
    static float PointDensity();
};
// }

}}} // ::g::Fuse::Elements
