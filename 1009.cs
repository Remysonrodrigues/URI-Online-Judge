using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            string nome = Console.ReadLine();
            double salarioFixo = Convert.ToDouble(Console.ReadLine());
            double montante = Convert.ToDouble(Console.ReadLine());
            double total = salarioFixo + (montante * 0.15);


            Console.WriteLine("TOTAL = R$ {0:0.00}", total);
            Console.ReadKey();
        }
    }
}
