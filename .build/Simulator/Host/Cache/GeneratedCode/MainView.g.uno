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
        var temp1 = new Fuse.Controls.DockPanel();
        var temp2 = new Fuse.Controls.StatusBarBackground();
        var temp3 = new Fuse.Reactive.JavaScript();
        var temp4 = new Fuse.Controls.StackPanel();
        var temp5 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "myVariable");
        var temp6 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("button_clicked");
        this.ClearColor = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp4);
        temp1.Behaviors.Add(temp3);
        global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Top);
        temp3.Code = "var Observable = require('FuseJS/Observable');\n\t\t\t\n\t\t\tvar myVariable = Observable(\"UPPERCASE lowercase\");\n\n\n\t\t\tvar lowercase = myVariable.map(function(x) {\n\t\t\t\treturn x.toLowerCase();\n\t\t\t});\n\n\t\t\tvar uppercase = myVariable.map(function(x)){\n\t\t\t\treturn x.toUpperCase();\n\t\t\t}\n\n\t\t\tfunction button_clicked(){\n\t\t\t\tmyVariable.value = \"Some other value\";\n\t\t\t\tdebug_log(myVariable);\n\t\t\t}\n\n\t\t\tmodule.exports = {\n\t\t\t\tmyVariable: myVariable,\n\t\t\t\tbutton_clicked: button_clicked\n\t\t\t};";
        temp3.LineNumber = 5;
        temp3.FileName = "MainView.ux";
        temp4.Children.Add(temp);
        temp4.Children.Add(temp6);
        temp.Behaviors.Add(temp5);
        temp6.Text = "Change the Value";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb0.OnEvent);
        temp6.Behaviors.Add(temp_eb0);
        this.RootNode = temp1;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}
