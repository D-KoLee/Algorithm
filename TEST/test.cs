using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
namespace Rextester
{
    public class Program
    {
        enum EnumBits
        {
        ONE = 1,
        TWO = 2,
        THREE = 3,
        FOUR = 4
        };

        public static void Main(string[] args)
        {
        int ONE = (int)EnumBits.ONE;
        int TWO = (int)EnumBits.TWO;
        int THREE = (int)EnumBits.THREE;
        int FOUR = (int)EnumBits.FOUR;

        // Basic Mathimatical operations
        Console.WriteLine(ONE + TWO); // Value will be 3.
        Console.WriteLine(THREE - TWO); // Value will be 2.
        Console.WriteLine(TWO * FOUR); // Value will be 16.
        Console.WriteLine(FOUR / TWO); // Value will be 4.
        Console.WriteLine(FOUR % TWO); // Value will be 4.
        // Some bitwise operations
        Console.WriteLine(ONE | TWO); // Value will be 3.
        Console.WriteLine(TWO & THREE); // Value will be 0.
        Console.WriteLine(TWO ^ FOUR); // Value will be 10.
        Console.WriteLine(FOUR << 1); // Value will be 16.
        Console.WriteLine(FOUR >> 1); // Value will be 4.
        }
    }
}
