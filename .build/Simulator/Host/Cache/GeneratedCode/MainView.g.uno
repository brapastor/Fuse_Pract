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
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}
