#include<iostream>
using namespace std;
void tf(string a);
main(){
string a;
cout<<"Enter true or false:";
cin>>a;
tf(a);

}
void tf(string a){
if(a=="true"){
cout<<"false";
}
if(a=="false"){
cout<<"true";
}


}