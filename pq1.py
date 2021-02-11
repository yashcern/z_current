def z_current1 (Vs1, Vz, Rs):
    I1 = (Vs1 - Vz)/Rs
    return (I1)
def z_current2 (Vs2, Vz, Rs):
    I2 = (Vs2 - Vz)/Rs
    return (I2)

Vs1 = 20
Vs2 = 30
Vz = 10
Rs = 820
I1 = z_current1(Vs1, Vz, Rs)
print("The minimum Zener current:",I1 * 10**3)
I2 = z_current2(Vs2, Vz, Rs)
print("The maximum Zener current:",I2 * 10**3)