// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.18.8/Input/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{namespace UX{struct AttachedFocusMembers;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{
namespace UX{

// public static class AttachedFocusMembers :7
// {
uClassType* AttachedFocusMembers_typeof();
void AttachedFocusMembers__AddFocusGainedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedFocusMembers__AddFocusLostHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedFocusMembers__RemoveFocusGainedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedFocusMembers__RemoveFocusLostHandler_fn(::g::Fuse::Node* node, uDelegate* handler);

struct AttachedFocusMembers : uObject
{
    static void AddFocusGainedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void AddFocusLostHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveFocusGainedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveFocusLostHandler(::g::Fuse::Node* node, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Input::UX
