#include <iostream>
 using namespace std;

int main(){
    string input;
    char cur;
    int i,count;
    count=0;
    cin>>input;
    for(i=0;i<=input.length();i++){
    if(cur==input[i]) count++;
    else{
        if (count!=0){
        if (count>1) cout<<cur<<count;
        else cout<<cur;}
        count=1;
        cur=input[i];
    }
    
    }
}
