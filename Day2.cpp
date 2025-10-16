#include<iostream>
using namespace std;
int main(){
    cout<<"Pattern\n";

    int n = 5;
    for(int i = 0;i<n;i++){
        for(int j = i; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}