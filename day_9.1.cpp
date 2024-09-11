#include <iostream>
using namespace std;




int main(){
    int x;
    x=4;
    int* ptr=&x;
    cout<<x<<" "<<*ptr;

    return 0;
}