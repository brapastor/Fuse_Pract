// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.19.1/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSTextAttachment
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::NSTextAttachment*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::NSTextAttachment_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.NSTextAttachment.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class NSTextAttachment :50682
// {
::g::iOS::Foundation::NSObject_type* NSTextAttachment_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NSTextAttachment);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.UIKit.NSTextAttachment", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::UIKit
