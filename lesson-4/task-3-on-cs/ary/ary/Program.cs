using System;

namespace ary
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rnd = new Random();

            const int DIM1 = 100;
            const int DIM2 = 100;

            int[,] array = new int[DIM1, DIM2];
            int maxNumber = 92;


            for (int i = 0; i < DIM1; i++)
            {
                for (int j = 0; j < DIM2; j++)
                {
                    array[i, j] = rnd.Next(10, maxNumber - 1);
                }
            }

            for (int i = 0; i < DIM1; i++)
            {
                for (int j = 0; j < DIM2; j++)
                {
                    Console.Write("{0,3}",array[i, j]);
                    if(j == 99)
                    {
                        Console.WriteLine("\n");
                    }
                    if (array[i, j] < maxNumber && array[i, j] % 2 == 0)
                    {
                        maxNumber = array[i, j];
                    }
                }
            }

            if (maxNumber != 100)
            {
                Console.WriteLine("====================================================================================\n" + maxNumber);
            }
            else
            {
                Console.WriteLine(array[0,0]);
            }
        }
    }
}
