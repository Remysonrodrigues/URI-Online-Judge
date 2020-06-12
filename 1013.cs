using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {            
            string[] linha = Console.ReadLine().Split(' ');
            int a = int.Parse(linha[0]);
            int b = int.Parse(linha[1]); 
            int c = int.Parse(linha[2]);            
            int maiorAB = (a + b + Math.Abs(a - b)) / 2;
            int maiorABC = (c + maiorAB + Math.Abs(maiorAB - c)) / 2;
            
            
            Console.WriteLine("{0} eh o maior", maiorABC);

            Console.ReadKey();
        }
    }
}
