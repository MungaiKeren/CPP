#include <iostream>
using namespace std;

int main(){
    int score;
    cout<<"Enter your exam score: ";
    cin >> score;
    if (score >= 70){
        cout<<"Your grade is: A\n";
    } else if(score >=60){
        cout<<"Your grade is: B\n";
    } else if (score >= 50){
        cout<<"Your grade is: C\n";
    } else if (score >= 40){
        cout<<"Your grade is: D";
    } else {
        cout<<"You got less than 40. Thats a fail. \n";
    };
    return 0;
};