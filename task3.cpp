#include<iostream>
using namespace std;
void finalamount(string nam,int price,int dis,int fa);
main(){
string name;
int price,fa,dis;
cout<<"Enter the country's name:";
cin>>name;
cout<<"Enter the ticket price in dollars:$";
cin>>price;


finalamount(name,price,dis,fa);

}
void finalamount(string name,int price,int dis,int fa){
if(name=="Pakistan"){
dis=price*5/100;
fa=price-dis;
cout<<"Final ticket price after discount:$"<<fa;


}
if(name=="Ireland"){
dis=price*10/100;
fa=price-dis;
cout<<"Final ticket price after discount:$"<<fa;


}
if(name=="India"){
dis=price*20/100;
fa=price-dis;
cout<<"Final ticket price after discount:$"<<fa;


}
if(name=="England"){
dis=price*30/100;
fa=price-dis;
cout<<"Final ticket price after discount:$"<<fa;


}
if(name=="Canada"){
dis=price*45/100;
fa=price-dis;
cout<<"Final ticket price after discount:$"<<fa;


}





}
