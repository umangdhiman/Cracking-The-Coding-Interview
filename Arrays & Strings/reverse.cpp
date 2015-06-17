/* P1.2) IMPLEMENT A FUNCTION void reverse(char *str) IN C OR C++ WHICH REVERSES A NULL TERMINATED STRING
 */
#include<iostream>
#include<stdlib.h>
using namespace std;
void reverse(char *str){
    int i,len,temp;
    len=strlen(str);
    for(i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
} 
int main(){
    char str[30];
    cout<<"Enter a string\n";
    cin>>str;
    reverse(str);
    cout<<str<<endl;
    return 0;
}
