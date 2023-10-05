#include <iostream>
#include <cmath>
 using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a>>b>>c;
    b=abs(b-a);
    c=abs(c-a);
    a=0;
    if (b<c){
        cout<<"B "<<b;
    }else{
        cout<<"C "<<c;
    }
}
