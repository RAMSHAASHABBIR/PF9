#include <iostream>
using namespace std;
main()
{
    string name;
    cout <<"enter a no:";
    getline(cin,name);
    int j=0;
    while(name[j]!='\0')
    {
        j++;
    }
cout << j;
}