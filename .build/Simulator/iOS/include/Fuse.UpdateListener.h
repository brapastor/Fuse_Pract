// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.18.8/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct UpdateListener;}}

namespace g{
namespace Fuse{

// internal sealed class UpdateListener :6582
// {
uType* UpdateListener_typeof();
void UpdateListener__ctor__fn(UpdateListener* __this);
void UpdateListener__Invoke_fn(UpdateListener* __this);
void UpdateListener__New1_fn(UpdateListener** __retval);

struct UpdateListener : uObject
{
    uStrong<uDelegate*> action;
    bool defer;
    bool removed;
    int sequence;

    void ctor_();
    void Invoke();
    static UpdateListener* New1();
};
// }

}} // ::g::Fuse
