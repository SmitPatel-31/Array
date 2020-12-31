#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
     int max=-111110;
     int min =110101201;

    for(int j=0;j<=n-1;j++){
        if (min >arr[j]){
            min=arr[j];
        }
        if(max<arr[j]){
            max=arr[j];
        }
    } 
    cout<<"Max ---"<<max<<" "<<"Min---"<<min<<endl;

    return 0;


}