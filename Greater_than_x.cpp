#include<iostream>
using namespace std;
    int x;
    int n;
int main(){
     cout<<"Enter size of array = "<<endl;
    cin>>n;
    cout<<"enter value of x for compare with array = "<<endl;
    cin>>x;
    int a[n];
    cout<<"Enter array element "<<endl;
    for (int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans = 0;
    for (int i  = 0; i<n; i++)
    {
        if (a[i]>x){
           ans = a[i];
           cout<<"This is grater = " <<ans<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}
