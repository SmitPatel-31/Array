#include<iostream>

using namespace std;

int main() {
    cout<<"Enter your Size of array"<<endl;
    int n;
    cin>>n;
    int arr[15],no[15];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    int j=n-1;
    for(j=n-1;j>=0;j--){

        no[k] = arr[j];
        k++;

    }
    for (int z=0;z<n;z++){
        cout<<no[z]<<" ";
    }
    
    return 0;
}