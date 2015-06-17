/* WRITE A METHOD TO REPLACE ALL SPACES IN A STRING WITH %20
 */
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    int i,j,count=0,len,len1;
    cout<<"Enter a string with/without spaces\n";
    getline(cin,str);   
    len=str.length();
    for(i=0;i<len;i++){
        if(str[i]==' ')
            count++;
    }
    len1=len+count*3-1;
    str.resize(len1);
    for(i=len-1,j=(len+3*count-2);i>=0&&j>=0;i--,j--){
        if(str[i]!=' ')
            str[j]=str[i];
        else{
            str[j]='0';
            str[--j]='2';
            str[--j]='%';
        }
    }
    cout<<str;
    return 0;
}
