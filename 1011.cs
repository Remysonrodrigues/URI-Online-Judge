using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            double pi = 3.14159;
            double raio = Convert.ToDouble(Console.ReadLine());
            double volume = (4.0 / 3) * pi * Math.Pow(raio, 3);

            Console.WriteLine("VOLUME = {0:0.000}", volume);
            Console.ReadKey();
        }
    }
}
