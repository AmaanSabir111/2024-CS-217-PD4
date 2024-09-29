#include<iostream>
using namespace std;
void longesttime(int h,int m,int hm,int ms);
main(){
int h,m,hm,ms;
cout<<"Enter the number of hours:";
cin>>h;
cout<<"Enter the number of minutes:";
cin>>m;
longesttime(h,m,hm,ms);
}
void longesttime(int h,int m,int hm,int ms){
hm=h*60*60;
ms=m*60;
if(hm>ms){
cout<<h;
}
if(hm<ms){
cout<<m;
}

}




