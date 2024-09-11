#include <iostream>
using namespace std;
int stringLen(const std::string &str){
    return str.length();
}

int countchar(const std::string &str,char ch){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            count++;
        }
    }
    return count;
}

string concat(const std::string &str1, const std::string &str2){
    return str1+str2;
}
int main(){
    string s="tatha";

    cout<<stringLen(s)<<endl;

    cout<<countchar(s,'t')<<endl;

    cout<<concat("Hello ","world!");
    return 0;
}