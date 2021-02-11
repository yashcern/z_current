# include<iostream>
# include<iomanip>
# include<math.h>

using namespace std;

float I1, I2;
double z_current1 (double Vz,double Vs,double Rs)
{
    return I1 = (Vs - Vz)/Rs;
}
double z_current2 (double Vz,double Vs,double Rs)
{
    return I2 = (Vs - Vz)/Rs;
}

int main()
{
    float a;
    a = pow(10,3);
    I1 = z_current1(10,20,820);
    I2 = z_current2(10,30,820);
    I1 =  I1*a;
    I2 =  I2*a;
    cout << "The minimum Zener current \n:" << setprecision(5) << I1 << endl;
    cout << "The minimum Zener current \n:" << setprecision(5) << I2 << endl;
    return 0;
}