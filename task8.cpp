#include<iostream>
using namespace std;
void pet(int holidays,int wd,int tg,int diff);
main(){
int holidays,wd,tg,diff;
cout<<"Holidays:";
cin>>holidays;
pet(holidays,wd,tg,diff);








}
void pet(int holidays,int wd,int tg,int diff){
wd=365-holidays;
tg=wd*63+holidays*127;
diff=30000-tg;
if(diff<1){
cout<<"Tom will run away"<<endl;
cout<<tg<<" minutes for play";
}
if(diff>=1){
cout<<"Tom sleeps well"<<endl;
cout<<diff<<"minutes less for play";
}



}













