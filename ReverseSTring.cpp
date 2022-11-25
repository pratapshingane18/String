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
   char A[] = "Python";
   char B[7];

   int i;

   for(i= 0; A[i]!='\0'; i++){}
   i = i -1;

    int j;
   for( j =0; i >=0; j++, i--){
    B[j] = A[i];

   }

   B[j] = '\0';

   cout<<B<<endl;


    
    return 0;
}
