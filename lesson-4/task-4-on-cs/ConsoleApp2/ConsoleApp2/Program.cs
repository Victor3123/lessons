using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rnd = new Random();  

            const int size = 10;

            int[,] firstArray = new int[size, size];
            int[,] secondArray = new int[size, size];
            int[,] thirdArray = new int[size, size];

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    firstArray[i, j] = rnd.Next(10, 30);
                    secondArray[i, j] = rnd.Next(10, 30);
                    thirdArray[i, j] = firstArray[i, j] + secondArray[i, j];
                }
            }

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    Console.Write("{0,3}", thirdArray[i, j]);
                    if (j == 9) {
                        Console.WriteLine("\n");
                    }
                }
            }


        }
    }
}