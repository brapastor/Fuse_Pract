public partial class MainView: Fuse.App
{
    internal Fuse.Controls.Rectangle GreyRectangle;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Controls.DockPanel();
        var temp1 = new Fuse.Controls.StatusBarBackground();
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.Rectangle();
        var temp4 = new Fuse.Gestures.WhileHovering();
        var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0f, 0f, 1f));
        GreyRectangle = new Fuse.Controls.Rectangle();
        var temp6 = new Fuse.Drawing.StaticSolidColor(float4(0.8f, 0.8f, 0.8f, 1f));
        this.ClearColor = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.Children.Add(temp1);
        temp.Children.Add(temp2);
        global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
        temp2.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.Children.Add(temp3);
        temp2.Children.Add(GreyRectangle);
        temp3.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp3.Width = 100f;
        temp3.Height = 100f;
        temp3.Fill = temp5;
        temp3.Behaviors.Add(temp4);
        GreyRectangle.CornerRadius = float4(10f, 10f, 10f, 10f);
        GreyRectangle.Width = 100f;
        GreyRectangle.Height = 100f;
        GreyRectangle.Margin = float4(10f, 0f, 0f, 0f);
        GreyRectangle.Name = "GreyRectangle";
        GreyRectangle.Fill = temp6;
        this.RootNode = temp;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}
