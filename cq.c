# include<stdio.h>
# include<math.h>

float I1, I2;
double z_current1 (double Vz, double Vs, double Rs)
{
    return I1= (Vs - Vz)/Rs;
}

double z_current2 (double Vz, double Vs1, double Rs)
{
    return I2= (Vs1 - Vz)/Rs;
}

int main()
{   
    float a;
    printf("The minimum current occurs when the source voltage is minimum Visualize = 20\n");
    printf("The maximum current occurs when the source voltage is minimum Visualize = 30\n");
    printf("****************************************************************************\n");
    printf("The Zener Brakdown Voltage: 10\n");

    int Vs=20;
    int Vs1=30;
    int Vz=10;
    int Rs=820;

    I1 = z_current1(Vs, Vz, Rs);
    a = pow(10,3);
    I1 = -(I1*a);

    I2 = z_current2 (Vs1, Vz, Rs);
    I2 = -(I2*a);
    printf("The minimum Zener current %f\n:",I1);
    printf("The maximum Zener current %f\n:",I2);
    return 0;

}