namespace ConsoleApp3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello, World!");
        }

        class Rectangle {

            private double heigh, width,area;

            public Rectangle(double h, double w)
            {
                heigh = h;
                width = w;
            }
            public void input()
            {
                Console.WriteLine("Enter Heigh: ");
                heigh = double.Parse(Console.ReadLine());
                Console.WriteLine("Enter Weight: ");
                width = double.Parse(Console.ReadLine());
            }
            public double Area 
            {
                get { return area; }
                set { area = heigh * width; }
            }
        
        }
    }
}
