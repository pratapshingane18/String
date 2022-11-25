// If it contains special characters then it is not a proper string

#include<iostream>
using namespace std;



int Valid(char *s){
    for(int i=0; s[i]!='\0'; i++){
        
        if(!(s[i] >= 65 && s[i] <= 90) && !(s[i] >+ 97 && s[i] <=122) && !(s[i] >= 48 && s[i] <= 57)){
            return 0;
        }
        
    }

    return 1;
}

int main(){
    char *s = "AM123injskndnlfjffof";

    cout<<"Changed string is::"<<s<<endl;

    if(Valid(s)){
        cout<<"String is Valid"<<endl;


    }


    else{
        cout<<"Invalid String"<<endl;
    }




    
    return 0;
}
