#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"size of array";
    cin>>n;
    int arr[n];
    for (int size=0;size<n;size++){
        cin>>arr[size];
    }
    int min=10000000;
    int max=-1000000;
    int max_num=0;
    int min_num=0;
    for(int j=0;j<n;j++){
        if(min>arr[j]){
            min=arr[j];
            min_num=j;
        }
        if (max<arr[j]){
            max=arr[j];
            max_num=j;
        }
    }
    cout<<"Place of max num is...."<<"  "<<max_num<<" "<<"Place of min num is..."<<" "<<min_num<<endl; 
}