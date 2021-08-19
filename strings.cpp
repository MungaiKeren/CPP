#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[25] = "Edureka ";
    char str2[25] = "Happy learning ";
    char str3[30];

    int len;
    strcpy(str3, str1);
    cout<<"strcpy(str3, str1) - copied str1 to str3 " << str3 << endl<<endl;

    strcat(str1, str2);
    cout<<"strcat, joins two strings and stores the result in the first string."<<endl;
    cout<< str1 <<endl<<endl;

    len = strlen(str1);
    cout<<"The length of " <<str1 <<" is "<< len <<endl;
    return 0;
};