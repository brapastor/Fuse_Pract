// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.18.8/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public sealed class BasicStyle.Fuse_Controls_TextControl_float_FontSize_Property :100
// {
::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property_typeof();
void BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property__ctor_1_fn(BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property* __this, ::g::Fuse::Controls::TextControl* obj);
void BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property** __retval);
void BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property__OnGet_fn(BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property* __this, float* __retval);
void BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property__OnSet_fn(BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property* __this, float* v, uObject* origin);

struct BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_1(::g::Fuse::Controls::TextControl* obj);
    static BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property* New1(::g::Fuse::Controls::TextControl* obj);
};
// }

}}} // ::g::Fuse::BasicTheme
