#include <iostream>
using namespace std;

int add (int a, int b){ // the int return type means the function returns an integer value
    int c = a+b;
    return c;
}
// function prototype
void adding(int, int); // looks like some sort of function declaration.
int main()
{
    int sum = add(100,7);
    cout<< sum <<endl;
    // calling the function before declaration
    adding(10,4);
};

//function definition
void adding(int a, int b){
    cout<<(a+b);
}