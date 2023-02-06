#include <iostream>
using namespace std;
main()
{
    bool isfound=false;
    int size;
    cout <<"enter size of array:";
    cin >> size;
    int arr[size];
    for(int j=0;j<size;j++)
    {
        cout <<"enter no:";
        cin>> arr[j] ;  
    }
    int no;
    cout <<"enter no to find:";
    cin >> no;
    for(int j=0;j<size;j++)
    {
        if(no==arr[j])
        isfound=true;
    
    }
    if(isfound==true)
    cout <<"num found";
    else
    cout <<"num not found";


}
