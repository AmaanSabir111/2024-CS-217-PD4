#include<iostream>
using namespace std;
void equal(int a,int b);
main(){
int x,y;
cout<<"Enter first number:";
cin>>x;
cout<<"Enter second number:";
cin>>y;
equal(x,y);


}
void equal(int a,int b){
if(a==b){
cout<<"true";
}
if(a!=b){
cout<<"false";
}

}