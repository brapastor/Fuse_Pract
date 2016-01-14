public partial class MainView: Fuse.App
{
    public sealed class Fuse_Controls_TextControl_string_Value_Property: Uno.UX.Property<string>
    {
        Fuse.Controls.TextControl _obj;
        public Fuse_Controls_TextControl_string_Value_Property(Fuse.Controls.TextControl obj) { _obj = obj; }
        protected override string OnGet() { return _obj.Value; }
        protected override void OnSet(string v, object origin) { _obj.SetValue(v, origin); }
        protected override void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged += listener; }
        protected override void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged -= listener; }
    }
    MainView.Fuse_Controls_TextControl_string_Value_Property temp_Value_inst;
    MainView.Fuse_Controls_TextControl_string_Value_Property temp1_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb0;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Controls.TextInput();
        temp_Value_inst = new MainView.Fuse_Controls_TextControl_string_Value_Property(temp);
        var temp1 = new Fuse.Controls.Text();
        temp1_Value_inst = new MainView.Fuse_Controls_TextControl_string_Value_Property(temp1);
        var temp2 = new Fuse.Controls.DockPanel();
        var temp3 = new Fuse.Controls.StatusBarBackground();
        var temp4 = new Fuse.Reactive.JavaScript();
        var temp5 = new Fuse.Controls.StackPanel();
        var temp6 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "myVariable");
        var temp7 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "myVariable");
        var temp8 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("button_cliked");
        this.ClearColor = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp5);
        temp2.Behaviors.Add(temp4);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        temp4.Code = "var Observable = require('FuseJS/Observable');\n\t\t\tvar myVariable= Observable(\"brayan\");\n\n\t\t\tfunction button_cliked() {\n\t\t\t\tmyVariable = \"variable de funcion\";\n\t\t\t\tdebug_log(myVariable);\n\t\t\t}\n\n\t\t\tmodule.exports= {\n\t\t\t\tmyVariable: myVariable,\n\t\t\t\tbutton_cliked:button_cliked\n\t\t\t}";
        temp4.LineNumber = 5;
        temp4.FileName = "MainView.ux";
        temp5.Children.Add(temp);
        temp5.Children.Add(temp1);
        temp5.Children.Add(temp8);
        temp.Behaviors.Add(temp6);
        temp1.Behaviors.Add(temp7);
        temp8.Text = "Mi boton";
        global::Fuse.Gestures.Clicked.AddHandler(temp8, temp_eb0.OnEvent);
        temp8.Behaviors.Add(temp_eb0);
        this.RootNode = temp2;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}
