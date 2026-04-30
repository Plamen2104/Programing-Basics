namespace ConsoleApp2
{
    internal class Program
    {
        static void Main(string[] args)
        {


        }
    }
    class Point
    {
        private double x, y;
        public void input()
        {
            Console.Write("x = ");
            x = Double.Parse(Console.ReadLine());
            Console.WriteLine("y = ");
            y = Double.Parse(Console.ReadLine());
        }
        public void output()
        {
            Console.WriteLine("x: {0}   y: {1}", x, y);
        }
        public void Translation(double Vx,double Vy) {
            x += Vx;
            y += Vy;
        }
        public void Rotarion(double alphaDegrees)
        {
            double a = alphaDegrees * (Math.PI / 180.0);
            double x1 = x* Math.Cos(a)  - y*Math.Sin(a);
            double y1 = x*Math.Sin(a) + y*Math.Cos(a);

            x = x1;
            y = y1;
        }
        public void Scale(double kx, double ky)
        {
            x*= kx;
            y*= ky;
        }
}    }    


