#include<iostream>
using namespace std;

int main(){

    char s[] = "wElCoMe";
    int i;

    for(i=0; s[i]!='\0'; i++){
        
        if(s[i] >= 65 && s[i] <=90){
        s[i] = s[i]+32;
        }

        else if(s[i] >=97  && s[i]<='z'){
            s[i] -= 32;


        }
        
    }

    cout<<"Changed string is::"<<s<<endl;

    
    return 0;
}
