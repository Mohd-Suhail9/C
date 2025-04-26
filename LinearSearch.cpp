#include<iostream>
using namespace std;
// Linear Search not iffecient code
int search (int arr [],  int size ,  int key){
    for(int i = 0; i<10; i++){
        if ( arr[i] == key)
            {
            cout<<"Element is present in array "<< "at index  :"<<arr[i] <<endl;
            }
    else{
         cout<<"Element is  not present"<<endl;
    }
}
}
int main(){
    int k =4;
    int arr[10] = { 1,2,3,9,5,0,4,6,7,9};
    int size = sizeof(arr)/ sizeof(arr[0]);
    search( arr , size , k);
    return 0;
    }
