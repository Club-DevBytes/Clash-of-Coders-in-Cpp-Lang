#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int test,i,d,counter;
    float percent=0.0;
    cin>>test;
    while(test--){
       float pr=0.0;
        cin>>d;
        char s[d];
        cin>>s;
        for(i=0;i<d;i++){
            if(s[i]=='P')
                pr=pr+1;
        }
        percent=pr/d;
        counter=0;
        if(percent<0.75){
            for(i=2;i<d-2 && percent <0.75 ;i++){
                if((s[i]=='A') && ((s[i-1]=='P' || s[i-2]=='P')&&(s[i+1]=='P' || s[i+2]=='P'))){
                    counter++;
                    pr++;
                    percent=pr/d;
                }
            }
        }
        if(percent>=0.75)
            cout<<counter<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
