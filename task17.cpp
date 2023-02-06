#include <iostream>
using namespace std;
main()
{
    
   string name;
    cout <<"enter string:";
    cin >> name;
    getline(cin,name);
    for(int j=0;j!='\0';j++)
    {
        if(name[j]=='a'||name[j]=='e'||name[j]=='i'||name[j]=='o'||name[j]=='u')
        {
        continue;
        }
    cout << name[j];
    }
}