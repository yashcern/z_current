print("Voltage gain and Output voltage gain Calculator of Summing Amplifier")
def voltage_gain1(Rf, R1):
    return -Rf/R1

def voltage_gain2(Rf,R2):
    return -Rf/R2

def voltage_gain3(x0, x1, x2, x3, x4, x5):
    return (((Rf*R1)+(Rf*R2)*(R1*R2))/(R1+R2)) * ((R4*R5)/((R3*R4)+(R3*R5)+(R4*R5)))

def voltage_gain4(x0, x1, x2, x3, x4, x5):
    return (((Rf*R1)+(Rf*R2)*(R1*R2))/(R1+R2)) * ((R3*R5)/((R4*R3)+(R4*R5)+(R3*R5)))

def output_voltage(l1, l2, l3, l4, l5, l6, l7, l8):
    return (Av1*V1)+(Av2*V2)+(Av3*V3)+(Av4*V4)

while(True):
    Rf = float(input("Rf: "))
    R1 = float(input("R1: "))
    R2 = float(input("R2: "))
    R3 = float(input("R3: "))
    R4 = float(input("R4: "))
    R5 = float(input("R5: "))

    V1 = float(input("V1: "))
    V2 = float(input("V2: "))
    V3 = float(input("V3: "))
    V4 = float(input("V4: "))

    Av1 = voltage_gain1(Rf,R1)
    Av2 = voltage_gain2(Rf,R2)
    Av3 = voltage_gain3(Rf, R1, R2, R3, R4, R5)
    Av4 = voltage_gain4(Rf, R1, R2, R3, R4, R5)
    Vout = output_voltage(Av1, V1, Av2, V2, Av3, V3, Av4, V4)

    print("Voltage gain Av1:",Av1)
    print("Voltage gain Av2:",Av2)
    print("Voltage gain Av3:",Av3)
    print("Voltage gain Av4:",Av4)
    print("Output Voltage of Summing operational Amplifier: ",Vout)