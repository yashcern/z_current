function z_current1(Vz, Vs, Rs){
    return I1 = (Vs - Vz)/Rs;
}
function z_current2(Vz, Vs, Rs){
    return I2 = (Vs - Vz)/Rs;
}
var I1 = z_current1(10, 20, 820);
var I2 = z_current2(10, 30, 820);
var a = Math.pow(10,3);
console.log("The minimum Zener current:", I1*a)
console.log("The maximum Zener current:", I2*a)