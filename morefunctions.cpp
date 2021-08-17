#include <iostream>
using namespace std;

// function greet
void greet(){
    cout<<"Hellooooo Wooorrrrlllllddd" <<endl; // 
}

// now lets try some parameters
void printNums(int num){
    cout<< num <<endl;
}

// More parameters
void displayNums(int x, float y){
    cout<< "The int number is " << x <<endl;
    cout<< "The float number is "<< y <<endl;
}

int main(){
    // cout<<"Hello World" <<endl;
    // This time round I'll call the function
    greet();
    // printNums(64);
    // we could still use variables as parameters
    int n = 55;
    printNums(n);
    displayNums(3, 5.6);
    return 0;
}