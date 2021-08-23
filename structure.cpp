#include <iostream>
using namespace std;

struct school
{
    /* data */
    int admNo;
    string name;
    float percentage;
};

int main()
{
    struct school S1 = {3839, "Keren", 33.4};
    cout<<"name is "<<S1.name<<endl 
    <<" Adm No. "<<S1.admNo<<endl
        <<" grade "<<S1.percentage<<"%" <<endl;
};