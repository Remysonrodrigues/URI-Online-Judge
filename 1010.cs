using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            
            int i = 0;
            double valorFinal = 0;
            while(i < 2)
            {
                string[] linha = Console.ReadLine().Split(' ');
                int c = int.Parse(linha[0]);
                int n = int.Parse(linha[1]);
                double v = double.Parse(linha[2]);
                valorFinal += (double) (n * v);
                i++;
            }
            Console.WriteLine("VALOR A PAGAR: R$ {0:0.00}", valorFinal);
            Console.ReadKey();
        }
    }
}
