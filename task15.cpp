#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"enter size of array:";
    cin >> size;
    int arr[size];
    int arr2[2];
    for(int j=0;j<size;j++)
    {
        cout <<"enter no of arr :";
        cin>> arr[j] ;  
    }
    for(int j=0;j<2;j++)
    {
        cout <<"enter no of arr2:";
        cin>> arr2[j] ;  
    }
    cout << arr2[0];
    for(int j=0;j<size;j++)
    
    {
       
        cout << arr[j];
        
    }
    cout << arr2[1];
}
