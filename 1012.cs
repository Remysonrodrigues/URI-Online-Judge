using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] linha = Console.ReadLine().Split(' ');
            double a = double.Parse(linha[0]);
            double b = double.Parse(linha[1]);
            double c = double.Parse(linha[2]);

            double pi = 3.14159;


            Console.WriteLine("TRIANGULO: {0:0.000}", (a * c) / 2);
            Console.WriteLine("CIRCULO: {0:0.000}", (c * c) * pi);
            Console.WriteLine("TRAPEZIO: {0:0.000}", ((a + b) * c) / 2);
            Console.WriteLine("QUADRADO: {0:0.000}", b * b);
            Console.WriteLine("RETANGULO: {0:0.000}", a * b);
            Console.ReadKey();
        }
    }
}
