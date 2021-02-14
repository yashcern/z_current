# include<iostream>

using namespace std;

float Rf, R1, R2, R3, R4, R5, Av1, Av2, Av3, Av4, V1, V2, V3, V4, Vout;

double voltage_gain1(double Rf, double R1)
{
    return -Rf/R1;
}
double voltage_gain2(double Rf, double R2)
{
    return -Rf/R2;
}
double voltage_gain3(double x0, double x1, double x2, double x3, double x4, double x5)
{
    return (((Rf*R1)+(Rf*R2)*(R1*R2))/(R1+R2)) * ((R4*R5)/((R3*R4)+(R3*R5)+(R4*R5)));
}
double voltage_gain4(double x0, double x1, double x2, double x3, double x4, double x5)
{
    return (((Rf*R1)+(Rf*R2)*(R1*R2))/(R1+R2)) * ((R3*R5)/((R4*R3)+(R4*R5)+(R3*R5)));
}
double output_voltage(double l1, double l2, double l3, double l4, double l5, double l6, double l7, double l8)
{
    return (Av1*V1)+(Av2*V2)+(Av3*V3)+(Av4*V4);
}

int main()
{
    char command;
    do
    {
        cout << "\nRf" << endl;
        cin  >> Rf ;
        cout << "\nR1" << endl;
        cin  >> R1 ;
        cout << "\nR2" << endl;
        cin  >> R2 ;
        cout << "\nR3" << endl;
        cin  >> R3 ;
        cout << "\nR4" << endl;
        cin  >> R4 ;
        cout << "\nR5" << endl;
        cin  >> R5 ;

        cout << "\nV1" << endl;
        cin  >> V1 ;
        cout << "\nV2" << endl;
        cin  >> V2 ;
        cout << "\nV3" << endl;
        cin  >> V3 ;
        cout << "\nV4" << endl;
        cin  >> V4 ;

        Av1 = voltage_gain1(Rf, R1);
        Av2 = voltage_gain2(Rf, R2);
        Av3 = voltage_gain3(Rf, R1, R2, R3, R4, R5);
        Av4 = voltage_gain4(Rf, R1, R2, R3, R4, R5);

        Vout = output_voltage(Av1, V1, Av2, V2, Av3, V3, Av4, V4);

        cout << "\nVoltage gain Av1:" << Av1 << endl;
        cout << "\nVoltage gain Av2:" << Av2 << endl;
        cout << "\nVoltage gain Av3:" << Av3 << endl;
        cout << "\nVoltage gain Av4:" << Av4 << endl;
        cout << "\nOutput Voltage of Summing operational Amplifier: " << Vout << endl;
        printf("Calculate Again? (Y/y)");
        scanf(" %c", &command);
        printf("\n");
    }while (command == 'y' || command == 'Y');
    return 0;
}