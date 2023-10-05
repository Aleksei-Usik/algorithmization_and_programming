#include <iostream>
 using namespace std;

int main(){
    int n,count,max,maxx,cure;
    bool fl;
    cin>>n;
    maxx=2;
    max=1;
    cure=1;
    count=1;
    fl=true;
     while (count <= n)
    {
        if(fl){
            if (cure<max){
                cout<<count<<" ";
                count++;
                cure++;
            }else{
            if (cure==max){
                cout<<count<<endl;
                count++;
                max++;
                cure=1;
                if(max==maxx){
                    maxx++;
                    fl=false;
                }
            }}
        }else{
            if (cure<max){
            cout<<count<<" ";
            count++;
            cure++;
        }else{
        if (cure==max){
            cout<<count<<endl;
            count++;
            max--;
            cure=1;
            if(max==1){
                    fl=true;
                }
        }
        }}
    }
    
}
