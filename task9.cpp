#include <iostream>
using namespace std;
main()
{
    string name;
    cout <<"enter a no:";
    getline(cin,name);
    int j=0;
    while(name[j]!='\0')
    j++;
    for(int h=j;h>=0;h--)
    {
     cout <<name[h];
    }
}