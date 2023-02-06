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
    
        if(name[j]=='a'||name[j]=='e'||name[j]=='i'||name[j]=='o'||name[j]=='u')
        {
            j++;
        }
    }
    cout << j;
}

