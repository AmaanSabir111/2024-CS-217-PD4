#include<iostream>
using namespace std;
void flowers(float redrose,float whiterose,float tulips,float tp,float dp);
main(){
float redrose,whiterose,tulips,tp,dp;
cout<<"Red Rose:";
cin>>redrose;
cout<<"White Rose:";
cin>>whiterose;
cout<<"Tulips:";
cin>>tulips;
flowers(redrose,whiterose,tulips,tp,dp);

}
void flowers(float redrose,float whiterose,float tulips,float tp,float dp){
tp=redrose*2+whiterose*4.10+tulips*2.50;
cout<<"Original price:"<<tp<<endl;
if(tp>200){
dp=tp-tp*20/100;
cout<<"Price after discount:"<<dp;


}



}








