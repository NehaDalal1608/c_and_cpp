#include <iostream>

class SumOfSquares {
private:
    int sum;

public:
  
    SumOfSquares() {
        sum = 0;
    }

    
    SumOfSquares(int n) {
        sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i * i;
        }
    }

    int getSum() {
        return sum;
    }
};

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    SumOfSquares obj1;
    SumOfSquares obj2(n); 

    std::cout << "Sum of squares using default constructor: " << obj1.getSum() << std::endl;
    std::cout << "Sum of squares using parameterized constructor for n = " << n << ": " << obj2.getSum() << std::endl;

    return 0;
}


/*ubuntu@ubuntu-OptiPlex-3010:~$ ./a.out
Enter the value of n: 5
Sum of squares using default constructor: 0
Sum of squares using parameterized constructor for n = 5: 55*\

