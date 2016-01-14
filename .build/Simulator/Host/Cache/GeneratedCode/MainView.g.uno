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
    public sealed class Fuse_Reactive_Each_object_Items_Property: Uno.UX.Property<object>
    {
        Fuse.Reactive.Each _obj;
        public Fuse_Reactive_Each_object_Items_Property(Fuse.Reactive.Each obj) { _obj = obj; }
        protected override object OnGet() { return _obj.Items; }
        protected override void OnSet(object v, object origin) { _obj.Items = v; }
    }
    public sealed class Fuse_Controls_Image_string_Url_Property: Uno.UX.Property<string>
    {
        Fuse.Controls.Image _obj;
        public Fuse_Controls_Image_string_Url_Property(Fuse.Controls.Image obj) { _obj = obj; }
        protected override string OnGet() { return _obj.Url; }
        protected override void OnSet(string v, object origin) { _obj.Url = v; }
    }
    public partial class Factory: Uno.UX.IFactory
    {
        internal readonly MainView __parent;
        public Factory(MainView parent)
        {
            __parent = parent;
        }
        MainView.Fuse_Controls_Image_string_Url_Property temp_Url_inst;
        MainView.Fuse_Controls_TextControl_string_Value_Property temp1_Value_inst;
        static Factory()
        {
        }
        public object New()
        {
            var self = new Fuse.Controls.DockPanel();
            var temp = new Fuse.Controls.Image();
            temp_Url_inst = new MainView.Fuse_Controls_Image_string_Url_Property(temp);
            var temp1 = new Fuse.Controls.Text();
            temp1_Value_inst = new MainView.Fuse_Controls_TextControl_string_Value_Property(temp1);
            var temp2 = new Fuse.Reactive.DataBinding<string>(temp_Url_inst, "thumbnailUrl");
            var temp3 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "title");
            self.Margin = float4(0f, 0f, 0f, 10f);
            global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Left);
            temp.Behaviors.Add(temp2);
            temp1.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
            temp1.Alignment = Fuse.Elements.Alignment.CenterLeft;
            temp1.Margin = float4(10f, 10f, 10f, 10f);
            temp1.Behaviors.Add(temp3);
            self.Children.Add(temp);
            self.Children.Add(temp1);
            return self;
        }
    }
    MainView.Fuse_Controls_TextControl_string_Value_Property temp_Value_inst;
    MainView.Fuse_Reactive_Each_object_Items_Property temp1_Items_inst;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new MainView.Fuse_Controls_TextControl_string_Value_Property(temp);
        var temp1 = new Fuse.Reactive.Each();
        temp1_Items_inst = new MainView.Fuse_Reactive_Each_object_Items_Property(temp1);
        var temp2 = new Fuse.Controls.DockPanel();
        var temp3 = new Fuse.Controls.StatusBarBackground();
        var temp4 = new Fuse.Reactive.JavaScript();
        var temp5 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "errorMessage");
        var temp6 = new Fuse.Controls.ScrollView();
        var temp7 = new Fuse.Controls.StackPanel();
        var temp8 = new Factory(this);
        var temp9 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "pictures");
        this.ClearColor = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp);
        temp2.Children.Add(temp6);
        temp2.Behaviors.Add(temp4);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        temp4.Code = "var Observable = require('FuseJS/Observable');\n\n\t\t\tvar pictures = Observable();\n\t\t\tvar errorMessage=Observable(\"\");\n\n\t\t\tfetch(\"http://jsonplaceholder.typicode.com/photos dsd\")\n\t\t\t\t.then(function (result){\n\t\t\t\t\tthrow \"Some error\";\n\t\t\t\t\tresult.json().then(function(data){\n\t\t\t\t\t\tdebug_log(\"success!\");\n\n\t\t\t\t\t\tfor (var i=0; i<10 ;i++){\n\t\t\t\t\t\t\tvar item = data[i];\n\t\t\t\t\t\t\tpictures.add(item);\n\t\t\t\t\t\t}\n\t\t\t\t\t});\n\t\t\t\t}).catch(function(error){\n\t\t\t\t\terrorMessage.value=\"Oh no algo salio mal\";\n\t\t\t\t});\n\n\t\t\tmodule.exports={\n\t\t\t\tpictures:pictures,\n\t\t\t\terrorMessage:errorMessage\n\t\t\t};";
        temp4.LineNumber = 5;
        temp4.FileName = "MainView.ux";
        temp.TextColor = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Behaviors.Add(temp5);
        temp6.ClipToBounds = true;
        temp6.Content = temp7;
        temp7.Behaviors.Add(temp9);
        temp7.Behaviors.Add(temp1);
        temp1.Factories.Add(temp8);
        this.RootNode = temp2;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}
