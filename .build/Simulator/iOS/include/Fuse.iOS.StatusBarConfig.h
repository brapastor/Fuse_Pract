// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.18.8/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace iOS{

// public sealed class StatusBarConfig :946
// {
::g::Fuse::Behavior_type* StatusBarConfig_typeof();
void StatusBarConfig__ctor_1_fn(StatusBarConfig* __this);
void StatusBarConfig__get_Animation_fn(StatusBarConfig* __this, int* __retval);
void StatusBarConfig__set_Animation_fn(StatusBarConfig* __this, int* value);
void StatusBarConfig__Apply_fn();
void StatusBarConfig__GetAnimation_fn(int* __retval);
void StatusBarConfig__GetIsVisible_fn(bool* __retval);
void StatusBarConfig__GetStyle_fn(int* __retval);
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval);
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value);
void StatusBarConfig__New1_fn(StatusBarConfig** __retval);
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this, ::g::Fuse::Node* parentNode);
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this, ::g::Fuse::Node* parentNode);
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int* __retval);
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int* value);

struct StatusBarConfig : ::g::Fuse::Behavior
{
    int _animation;
    bool _hasAnimation;
    bool _hasIsVisible;
    bool _hasStyle;
    bool _isVisible;
    static uSStrong< ::g::Uno::Collections::List*> _stack_;
    static uSStrong< ::g::Uno::Collections::List*>& _stack() { return StatusBarConfig_typeof()->Init(), _stack_; }
    int _style;

    void ctor_1();
    int Animation();
    void Animation(int value);
    bool IsVisible();
    void IsVisible(bool value);
    int Style();
    void Style(int value);
    static void Apply();
    static int GetAnimation();
    static bool GetIsVisible();
    static int GetStyle();
    static StatusBarConfig* New1();
};
// }

}}} // ::g::Fuse::iOS
