#include<iostream>
using namespace std;
// Reverse array
int search (int arr [],  int size ,  int key){
    for (int i = 0; i <size; i++)
    {
        while(arr[i] < arr[size-1]){
            
            swap(arr[i],arr[size-1]);
        
            
    }
    
    cout<< " " <<arr[i];
    }
}
int main(){
    int k = 4;
    int arr[10]= { 1,2,3,9,5,0,4,6,7,9};
    int size = sizeof(arr)/ sizeof(arr[0]);
    search( arr , size , k);
    return 0;
    }
