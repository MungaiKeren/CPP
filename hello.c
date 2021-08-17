#include <iostream> 
using namespace std;
int main()
{
    // cout <<"Hello World!\n";
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    // cout << arr[3] <<endl;
    int test_array[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int i = 0; i < 3; i++){
        for(int j=0; j < 3; j++){
            cout<<"test["<< i <<"]["<< j <<"] = " <<test_array[i][j] <<endl; 
        }
    }
    return 0;
}