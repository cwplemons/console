// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float r1 = 0.001;
    float r2 = 0.330;
    float c1 = 22;
    printf("%f ms\n", (0.693*(r1+r2)*c1));
    printf("%f ms\n", (0.693*r2*c1));
    printf("%f kHz\n", (1.44/(r1+(2*r2)*c1))*1000);
}
