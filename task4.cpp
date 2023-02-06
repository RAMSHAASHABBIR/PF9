#include <iostream>
using namespace std;
main()
{
    int size;
    int product=0;
    cout <<"enter size of array:";
    cin >> size;
    int arr[size];
    for(int j=0;j<size;j++)
    {
        cout <<"enter no:";
        cin>> arr[j] ;  
    }
    int no;
    cout <<"enter no to multiply:";
    cin >> no;
    for(int j=size-1;j>=0;j--)
    {
         product=no*arr[j];
         cout <<"product in reverse order:" << product << endl;
    }

}