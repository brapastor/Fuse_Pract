// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.18.8/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{namespace Input{struct PointerLeftArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerLeftArgs :840
// {
::g::Fuse::NodeEventArgs_type* PointerLeftArgs_typeof();
void PointerLeftArgs__ctor_3_fn(PointerLeftArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
void PointerLeftArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerLeftArgs** __retval);

struct PointerLeftArgs : ::g::Fuse::Input::PointerEventArgs
{
    void ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
    static PointerLeftArgs* New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
