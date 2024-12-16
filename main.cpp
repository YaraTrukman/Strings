#include<iostream>
using namespace std;
int main(){
    string A ,B;
    cin>>A>>B;
    cout<<A.size()<<" "<<B.size()<<endl;
    string H = A+B;
    cout<<H<<endl;
    char t ;
    t = A[0];
    A[0] = B [0];
    B[0] = t ;
    cout<<A << " "<<B<<endl;


   

    return 0;
}