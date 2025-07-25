#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Default constructor
    Complex() : real(0), imaginary(0) {}

    // Parameterized constructor to initialize real and imaginary parts
    Complex(float r, float i) : real(r), imaginary(i) {}

   
    Complex add(const Complex& num) {
        Complex temp;
        temp.real = real + num.real;
        temp.imaginary = imaginary + num.imaginary;
        return temp;
    }

    
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex num1(3.5, 2.5); 
    Complex num2(1.2, 4.8); 

    Complex sum = num1.add(num2); 

    cout << "Sum of the complex numbers: ";
    sum.display();

    return 0;
}

/*ubuntu@ubuntu-OptiPlex-3010:~$ ./a.out
Sum of the complex numbers: 4.7 + 7.3i*\

