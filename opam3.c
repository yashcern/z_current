# include<stdio.h>

char command;
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
int main ()
{   
    char command;
    do
    {
        printf("Rf: ");
        scanf("%1f",&Rf);
        printf("R1: ");
        scanf("%1f",&R1);
        printf("R2: ");
        scanf("%1f",&R2);
        printf("R3: ");
        scanf("%1f",&R3);
        printf("R4: ");
        scanf("%1f",&R4);
        printf("R5: ");
        scanf("%1f",&R5);

        printf("V1: ");
        scanf("%f",&V1);
        printf("V2: ");
        scanf("%f",&V2);
        printf("V3: ");
        scanf("%f",&V3);
        printf("V4: ");
        scanf("%f",&V4);
    
        Av1 = voltage_gain1(Rf, R1);
        Av2 = voltage_gain2(Rf, R2);
        Av3 = voltage_gain3(Rf, R1, R2, R3, R4, R5);
        Av4 = voltage_gain4(Rf, R1, R2, R3, R4, R5);

        Vout = output_voltage(Av1, V1, Av2, V2, Av3, V3, Av4, V4);

        printf("Voltage gain Av1: %f\n",Av1);
        printf("Voltage gain Av2: %f\n",Av2);
        printf("Voltage gain Av3: %f\n",Av3);
        printf("Voltage gain Av4: %f\n",Av4);
        printf("Output Voltage of Summing operational Amplifier: %f\n",Vout);
        printf("Calculate Again? (Y/y)");
        scanf(" %c", &command);
        printf("\n");
    }while (command == 'y' || command == 'Y');
}