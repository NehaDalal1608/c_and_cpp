#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    
    return 0;
}

/*Enter a number: 53
53 is a prime number.
ubuntu@ubuntu-OptiPlex-3010:~$ ./a.out
Enter a number: 91
91 is not a prime number.*\

