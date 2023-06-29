#include<iostream>
#include"pod.h"
using namespace std;
int k,n,h=0,q=0;
int a[100][100]={},b,c[100]={};
void print(){
    for(int i=0;i<k;i++){
        cout<<i<<"("<<c[i]<<") | ";
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void number(){
    cin>>b;
    a[b-1][c[b-1]]=1;
    c[b-1]++;
}
int main(){
    cin>>n>>k;
    print();
    for(int i=0;i<n;i++){
        number();
    }
    for(int i=0;i<n;i++){
        if(a[i][0]==1){
            h++;
        }
    }
    if(h==k){
        q+=0;
    }
    else{
        q+=h;
    }
    cout<<"h = "<<h<<"q = "<<q<<"\n";
    print();
}
/*
10 3
1 3 3 2 3 1 2 2 3 3
*/