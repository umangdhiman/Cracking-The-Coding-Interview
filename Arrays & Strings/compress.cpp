/* IMPLEMENT A METHOD TO PERFORM BASIC STRING COMPRESSION USING THE COUNTS OF REPEATED CHARACTERS. FOR EXAMPLE, THE STRING AABCCCCCAAA WOULD BECOME A2B1C5A3.
 * IF THE COMPRESSED STRING WOULD NOT BECOME SMALLER THAN THE ORIGINAL STRING, YOUR METHOD SHOULD RETURN THE ORIGINAL STRING.
 */
#include<iostream>
using namespace std;
void compress(string str){
    int i,count=1,flag=0;
    for(i=0;i<(str.length()-1);i++){
        if(str[i]==str[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<str;
        exit(0);
    }
    for(i=0;i<(str.length()-1);i++){
        if(str[i]==str[i+1])
            count++;
        else{
            cout<<str[i]<<count;
            count=1;
        }
    }
    if(str[i]==str[i-1])
        cout<<str[i]<<count;
    else
        cout<<str[i]<<"1";
}
int main(){
    string str;
    cout<<"Enter a string\n";
    cin>>str;
    compress(str);
    return 0;
}
