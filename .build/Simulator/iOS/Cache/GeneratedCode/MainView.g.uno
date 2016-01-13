public partial class MainView: Fuse.App
{
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Controls.Button();
        this.ClearColor = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.Text = "saoess";
        temp.Width = 100f;
        temp.Height = 100f;
        this.RootNode = temp;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}