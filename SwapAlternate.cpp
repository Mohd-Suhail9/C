#include<iostream>
using namespace std;
// Swap Alternate 
int search (int arr [],  int size ){
    for (int i = 0; i <size; i+2)
    {
        if(  i  < arr[size-1])
        {
            swap(arr[i],arr[i+1]);

         cout<<arr[i];
       }
       else{
        cout<<"no";
       }
    }
}
int main(){
    int arr[10]= { 1,2,3,9,5,0,4,6,7,9};
    int size = sizeof(arr)/ sizeof(arr[0]);
    search( arr , size );
    return 0;
    }

