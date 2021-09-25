#include<bits\stdc++.h>
using namespace std;

int main(){
cout<<"Calculator"<<"\n";
cout<<"Enter the operation you want to perform\n";
cout<<"Press + for addition  operation\n";
cout<<"Press - for subtraction operation\n";
cout<<"Press * for multiplication operation\n";
cout<<"Press / for division operation\n";
  
char operation;
cin>> operation;

if(operation=='+'){
    cout<<"Enter two numbers to be added"<<"\n";
    int a,b;
    cin>>a>>b;
    cout<<(a+b);
}
else if(operation=='-'){
    cout<<"Enter two numbers to be subtracted"<<"\n";
    int a,b;
    cin>>a>>b;
    cout<<(a-b);
}
else if(operation=='*'){
    cout<<"Enter two numbers to be multiplied"<<"\n";
    int a,b;
    cin>>a>>b;
    cout<<(a*b);
}
else if(operation=='/'){
    cout<<"Enter two numbers to be divided"<<"\n";
    int a,b;
    cin>>a>>b;
    cout<<(a/b);
}

else{
    cout<<"Invalid Operation"<<"\n";
}



    return 0;
}