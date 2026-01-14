#include<iostream>
using namespace std;

int main(){

    int n=5;
    int arr[5];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements in the array are "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}