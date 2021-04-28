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
            int o = 100;


            for (int i = 0; i < DIM1; i++) {
                for (int j = 0; j < DIM2; j++) {
                    array[i, j] = rnd.Next(10, 90);
                }
            }
            for (int i = 0; i < DIM1; i++) {
                for (int j = 0; j < DIM2; j++) {
                    Console.WriteLine(array[i, j].ToString().PadLeft(4));
                    if (array[i, j] < o && array[i, j] % 2 == 0){
                        o = array[i, j];
                    }
                }
            }
            Console.WriteLine("====================================================================================\n" + o);
        }
    }
}