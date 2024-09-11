#include <iostream>
using namespace std;
int main(){
    int x=4;
    int* ptr=&x;
    int** ptr2=&ptr;

    cout<<x<<" "<<*ptr<<" "<< **ptr2;
    return 0;
}