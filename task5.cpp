#include<iostream>
using namespace std;
void tiles(int yp,int fp,int diff);
main(){
int yp,fp,diff;
cout<<"Enter your position:";
cin>>yp;
cout<<"Enter your friend's position:";
cin>>fp;
tiles(yp,fp,diff);
}
void tiles(int yp,int fp,int diff){
diff=fp-yp;
if(diff>=1 && diff<=6)
{
cout<<"true";
}
if(diff>6)
{
cout<<" false";
}


}


