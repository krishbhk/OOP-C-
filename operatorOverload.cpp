#include<bits/stdc++.h>
using namespace std;

class Overload{
    int m;
    public:
        Overload(int m){
            this->m = m;
        }
        void operator--(){
            this->m--;
        }
        void show(){
            cout<<"Value: "<<this->m;
        }
};

int main(){
    int a;
    cout<<"enter value: ";
    cin>>a;
    Overload o1(a);
    --o1;
    o1.show();
return 0;
}