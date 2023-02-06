#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"enter size of array:";
    cin >> size;
    int arr[size];
    for(int j=0;j>size;j++)
    {
        cout <<"enter no:";
        cin>> arr[j] ;  
    }
    for(int j=size-1;j>=0;j--)
    {
        cout << arr[j];
    }
    }