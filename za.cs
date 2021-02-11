using System;
namespace zcurrent
{
    class zc {
        public void z_current1(float Vz=10, float Vs=20 , float Rs=820)
        {
            double a = Math.Pow(10,3);
            float I1 = (Vs - Vz)/Rs;
            Console.WriteLine("The minimum Zener current:" + I1*a);
        }

        public void z_current2(float Vz=10, float Vs=30 , float Rs=820)
        {
            double a = Math.Pow(10,3);
            float I2 = (Vs - Vz)/Rs;
            Console.WriteLine("The minimum Zener current:" + I2*a);

        
        }
        static void Main(string[] args)
        {   
            zc pr = new zc();
            pr.z_current1();
            pr.z_current2();
        }
    }
}