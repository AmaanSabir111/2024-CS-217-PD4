#include<iostream>
using namespace std;
void challan(int s);
main(){
int speed;
cout<<"Enter speed:";
cin>>speed;
challan(speed);


}
void challan(int s){
if(s>100)
{
cout<<" YOU WILL BE CHALLENGED!!!";
}
if(s<=100)
{
cout<<"Perfect! You are going good";
}

}

