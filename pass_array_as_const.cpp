#include<iostream>
using namespace std;
//Pass array as const
void printArray( const  int arr[] ,int size ) {
    cout<<"This  is  array which pass as const :";
    for (int i = 0; i < size; i++)
    {
        // Print array which pass by function
        cout<<arr[i]<<" ";
    }
}
int main()
{ 
    int arr[4] = {2,3,5,4};
    // Find array size
    cout<< " Size of array which occopy by array element in bytes :"<<sizeof(arr)<<" bytes"<<endl;
   // First element size 
    cout<<"Size of array first element : " <<sizeof(arr[0]) <<" bytes"<<endl;
    // Calculate size of element which present in array
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< "Number of element which present in array : " <<size<<endl;
    // Func call
    printArray(arr,size);
   return 0;
}