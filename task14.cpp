#include <iostream>
using namespace std;
main()
{
    float sum=0;
    int size;
    int product=0;
    cout <<"enter size of array:";
    cin >> size;
    float arr[size];
    for(int j=0;j<size;j++)
    {
        cout <<"enter no:";
        cin>> arr[j] ;  
    }
    for(int j=0;j<size;j++)
    {
        sum=sum+arr[j];
    }
    cout << sum << "ohm";
}