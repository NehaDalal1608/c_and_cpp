#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}
int main() {
    struct Complex num1, num2, sum;
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);
    sum = addComplex(num1, num2);
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
} 


/*Enter real and imaginary parts of first complex number: 2.1
-2.3
Enter real and imaginary parts of second complex number: 5.6
23.2
Sum = 7.70 + 20.90i*\

