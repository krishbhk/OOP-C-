#include<iostream>
using namespace std;

class Overload{
    int m,n;
    public:
    friend istream &operator>>(istream &ob, Overload &b);
    friend ostream &operator<<(ostream &ob, Overload &b);
};

istream &operator>>(istream &ob, Overload &b){
    cout<<"ENter 2 nos: ";
    ob>>b.m;
    ob>>b.n;
    return ob;
}
ostream &operator<<(ostream &ob, Overload &b){
    cout<<"OUTPUT: ";
    ob<<b.m;
    ob<<b.n;
    return ob;
}


int main(){
    Overload o1;
    cin>>o1;
    cout<<o1;
}