#include<iostream>
using namespace std;

int main(){

    char s[] = "welcome";
    int i;

    for(i=0; s[i]!='\0'; i++){
        s[i] = s[i]-32;
        
    }

    cout<<"Changed string is::"<<s<<endl;

    
    return 0;
}
