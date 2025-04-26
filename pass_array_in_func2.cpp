#include<iostream>
using namespace std;
// Pass array as pointer
void printArray(int* arr, int size, int key)
{
cout<<"This is pass array :";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
        if( arr[i] == key){
            cout<<"Element is  present in pass array";
        }
    }
    cout<<"Element is not present in pass array";
    cout<<endl;
    
}
int main(){
    int k;
    int arr[5] = {3,5,2,5,6};
    
    int size = sizeof(arr) /sizeof(arr[0]);
    printArray(arr, size,k);
    cout<<"Enter key"<<endl;
        cin>>k;
    return 0;
}