using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace Questão_3
{
    class Program
    {
		static void Main(string[] args)
		{

			Retangulo ret = new Retangulo();

			Console.WriteLine("Entre a largura e a altura do retângulo: ");
			ret.Largura = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
			ret.Altura = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

			Console.WriteLine("AREA = " + ret.Area().ToString("F2", CultureInfo.InvariantCulture));
			Console.WriteLine("PERIMETRO = " + ret.Perimetro().ToString("F2", CultureInfo.InvariantCulture));
			Console.WriteLine("DIAGONAL = " + ret.Diagonal().ToString("F2", CultureInfo.InvariantCulture));
		}
	}
}