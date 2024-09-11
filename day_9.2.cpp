#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int* ptr=&arr[0];
    int count=0;
    while(count!=5){
        cout<<*ptr;
        ptr++;
        count++;
    }


    return 0;
}