#include <iostream>
#include <algorithm> 
#include<string>
using namespace std;

int main(){
    int n;
    char tp;
    string stk;
    cin>>n;
    while (n!=0)
    {
        n-=1;
        stk +=(n%26+'A');
        n/=26;
    }
    reverse(stk.begin(), stk.end());
    cout<<stk;
}
