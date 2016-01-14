// This file was generated based on '/Users/brapastor/Fuse/pract/.build/Simulator/iOS/Cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Controls_TextControl_string_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Theme.h>
#include <Uno.Application.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[5];
static uType* TYPES[13];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :15
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("myVariable");
    ::STRINGS[1] = uString::Const("button_cliked");
    ::STRINGS[2] = uString::Const("var Observable = require('FuseJS/Observable');\n"
        "\t\t\tvar myVariable= Observable(\"brayan\");\n"
        "\n"
        "\t\t\tfunction button_cliked() {\n"
        "\t\t\t\tmyVariable = \"variable de funcion\";\n"
        "\t\t\t\tdebug_log(myVariable);\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tmodule.exports= {\n"
        "\t\t\t\tmyVariable: myVariable,\n"
        "\t\t\t\tbutton_cliked:button_cliked\n"
        "\t\t\t}");
    ::STRINGS[3] = uString::Const("MainView.ux");
    ::STRINGS[4] = uString::Const("Mi boton");
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::Application_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::Behavior_typeof();
    ::TYPES[7] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[8] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[10] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[11] = ::g::Fuse::AppBase_typeof();
    ::TYPES[12] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(19,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        MainView__Fuse_Controls_TextControl_string_Value_Property_typeof(), offsetof(::g::MainView, temp_Value_inst), 0,
        MainView__Fuse_Controls_TextControl_string_Value_Property_typeof(), offsetof(::g::MainView, temp1_Value_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :18
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// internal void InitializeUX() :22
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :18
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

// public MainView() [instance] :18
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// internal void InitializeUX() [instance] :22
void MainView::InitializeUX()
{
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = MainView__Fuse_Controls_TextControl_string_Value_Property::New1(temp);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New2();
    temp1_Value_inst = MainView__Fuse_Controls_TextControl_string_Value_Property::New1(temp1);
    ::g::Fuse::Controls::DockPanel* temp2 = ::g::Fuse::Controls::DockPanel::New2();
    ::g::Fuse::Controls::StatusBarBackground* temp3 = ::g::Fuse::Controls::StatusBarBackground::New2();
    ::g::Fuse::Reactive::JavaScript* temp4 = ::g::Fuse::Reactive::JavaScript::New1();
    ::g::Fuse::Controls::StackPanel* temp5 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Reactive::DataBinding* temp6 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[0/*"myVariable"*/]);
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[0/*"myVariable"*/]);
    ::g::Fuse::Controls::Button* temp8 = ::g::Fuse::Controls::Button::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[1/*"button_cliked"*/]);
    ClearColor(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Behavior*/])), temp4);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    temp4->Code(::STRINGS[2/*"var Observa...*/]);
    temp4->LineNumber(5);
    temp4->FileName(::STRINGS[3/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Behavior*/])), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Behavior*/])), temp7);
    temp8->Text(::STRINGS[4/*"Mi boton"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp8, uDelegate::New(::TYPES[10/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Behavior*/])), temp_eb0);
    RootNode(temp2);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
}

// public MainView New() [static] :18
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
