#include<iostream>
using namespace std;
void days(int nofp,int tp,int sheets,int sheetswehave,int rsheets,float day);
main(){
int nofp,tp,sheets,sheetswehave,rsheets;
float day;
cout<<"Number of people in household:";
cin>>nofp;
cout<<"Number of rolls of tissue paper:";
cin>>tp;
days(nofp,tp,sheets,sheetswehave,rsheets,day);
}
void days(int nofp,int tp,int sheets,int sheetswehave,int rsheets,float day){
sheets=(tp*500)/(nofp*57);
sheetswehave=tp*500/(57)/nofp;
rsheets=14*nofp*500*57;
day=tp*500/57/nofp;
if(sheetswehave<rsheets){
cout<<"Your tissue paper will last only"<<day<<" daysBuy More!";
}
if(sheetswehave>rsheets){
cout<<"Your tissue paper will last "<<day<<" days No need to panic!";
}

}















