/* GIVEN TWO STRINGS, WRITE A METHOD TO DECIDE IF ONE IS A PERMUTATION OF OTHER
 */
#include<iostream>
using namespace std;
int is_permutation(string s1, string s2){
    int i,j,count,a[26];
    for(i=0;i<26;i++)
        a[i]=0;
    for(i=0;i<s1.length();i++){
        if(s1[i]<97)
            ++(a[s1[i]-65]);
        else
            ++(a[s1[i]-97]);
    }
    for(i=0;i<s2.length();i++){
        if(s2[i]<97)
            --(a[s2[i]-65]);
        else
            --(a[s2[i]-97]);
    }
    for(i=0;i<26;i++){
        if(a[i]!=0)
            return 0;
    }
    return 1;
}
int main(){
    string str1,str2;
    int i;
    cout<<"Enter 2 strings\n";
    cin>>str1>>str2;
    i=is_permutation(str1,str2);
    if(i==1)
        cout<<"Yes strings are permutation of each other\n";
    else
        cout<<"Strings are NOT permutation of each other\n";
    return 0;
}
