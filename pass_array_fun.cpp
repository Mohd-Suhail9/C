#include<iostream>
using namespace std;
//Pass array with the help of reference
void printArray( int arr[] ,int size ) {
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{ 
    int arr[4] = {2,3,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
   return 0;
}
