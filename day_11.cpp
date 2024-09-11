#include <iostream>
using namespace std;
void check(int arr[],int size,int target){
  for(int i=0;i<size;i++){
    if(arr[i]==target){
      cout<<"Yes"<<endl;
      return;
    }
  }
  cout<<"No";
}
int return_index(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i+1;
        }
    }
    return -1;
}


int main(){
int arr[5]={1,2,3,4,5};
check(arr,5,9);
cout<<return_index(arr,5,2);

return 0;
}
