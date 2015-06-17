/* IMPLEMENT AN ALGORITHM TO DETERMINE IF A STRING HAS ALL UNIQUE CHARACTERS. WHAT IF "YOU CAN NOT USE ADDITIONAL DATA STRUCTURES?"
 */
#include<iostream>
using namespace std;
int main(){
    int i,j,len,count;
    string str;
    cout<<"Enter a string\n";
    cin>>str;
    len=str.length();
    for(i=0;i<len;i++){
        count=1;
        for(j=i+1;j<len;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>1){
            cout<<"String does not have unique characters\n";
            exit(0);
        }
    }
    cout<<"String has all unique characters\n";
    return 0;
}
