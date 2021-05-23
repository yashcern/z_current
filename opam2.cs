// OPamp Voltage gain Calculator

using System;
namespace opamp
{
    class Sum_opamp
    {  
        public double voltage_gain1 (double Rf, double R1)
        {
            return  -Rf/R1;
            
        }
        public double voltage_gain2 (double Rf, double R2)
        {
            return  -Rf/R2;
           
        }
        public double voltage_gain3 (double Rf, double R1, double R2, double R3, double R4, double R5)
        {
            return  (((Rf*R1)+(Rf*R2)*(R1*R2))/(R1+R2)) * ((R4*R5)/((R3*R4)+(R3*R5)+(R4*R5)));
            
        }
        public double voltage_gain4 (double Rf, double R1, double R2, double R3, double R4, double R5)
        {
            return (((Rf*R1)+(Rf*R2)*(R1*R2))/(R1+R2)) * ((R3*R5)/((R4*R3)+(R4*R5)+(R3*R5)));
             
        }
        public double output_volt (double Av1, double V1, double Av2, double V2, double Av3, double V3, double Av4, double V4)
        {
            return  (Av1*V1)+(Av2*V2)+(Av3*V3)+(Av4*V4);
            
        }
        static void Main(string[] args)
        {   
            double Rf, R1, R2, R3, R4, R5, V1, V2, V3, V4, Av1, Av2, Av3, Av4, Vout;
            
            // Taking Input Values of Resistors

            Console.WriteLine("Rf: ");
            Rf = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("R1: ");
            R1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("R2: ");
            R2 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("R3: ");
            R3 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("R4: ");
            R4 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("R5: ");
            R5 = Convert.ToDouble(Console.ReadLine());
            
            // Taking Input Valuse of Input Voltages

            Console.WriteLine("V1: ");
            V1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("V2: ");
            V2 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("V3: ");
            V3 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("V4: ");
            V4 = Convert.ToDouble(Console.ReadLine());


            Sum_opamp opamp = new Sum_opamp();

            Av1 = opamp.voltage_gain1(Rf, R1);
            Av2 = opamp.voltage_gain2(Rf, R2);
            Av3 = opamp.voltage_gain3(Rf, R1, R2, R3, R4, R5);
            Av4 = opamp.voltage_gain4(Rf, R1, R2, R3, R4, R5);
            Vout = opamp.output_volt(Av1, V1, Av2, V2, Av3, V3, Av4, V4);

            Console.WriteLine("Voltage gain Av1:" + Av1); 
            Console.WriteLine("Voltage gain Av2:" + Av2); 
            Console.WriteLine("Voltage gain Av3:" + Av3); 
            Console.WriteLine("Voltage gain Av4:" + Av4);
            Console.WriteLine("Output Voltage of Summing operational Amplifier:" + Vout); 

        }
    }
}
