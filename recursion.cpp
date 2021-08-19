// a function that calls itself.
// Recursion example using a factorial function

#include <iostream>
using namespace std;

int factorial (int);

int main()
{
    int n, result;
    cout<<"Enter a non negative number" <<endl;
    cin >> n;
    result = factorial(n);
    cout<< "Factorial of "<< n << " = " << result <<endl;
    return 0;
}

int factorial (int n){
    if(n > 1){
        return n * factorial(n - 1); // recursion taking place
    } else {
        return 1;
    }
}