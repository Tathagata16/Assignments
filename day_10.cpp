#include <iostream>
using namespace std;
int findmax(int arr[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max)max=arr[i];
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    cout<<findmax(arr,n);


    return 0;
}