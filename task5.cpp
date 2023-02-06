 #include <iostream>
using namespace std;
main()
{
    int size;
    int counter=0;
    int store=0;
    cout <<"enter size of array:";
    cin >> size;
    int arr[size];
    int no;
    int smallest=0;
     for(int j=0;j<size;j++)
     {
        cout <<"enter no:";
        cin >> arr[j];
     }
     smallest=arr[0];
     for(int n;n<size;n++)
     {
        if(arr[n]<smallest)
        {
            smallest=arr[n];
        }
     }
     cout <<"smallest no" << smallest;
     
        
 }
