#include<iostream>
using namespace std;
void printMenu(){
cout<<"  ##   ##  ##       # ####### #          # ###### ######   ####  ##### ###### #      #    ####   ###    ##      ## #####  ##   ##  ###  ##### ##       #"<<endl;
cout<<"  ##   ##  ##  #    #    ##    #        #  ##     #    #  ##  ##   #     ##    #    #    ##  ##  #  #   ## #  # ##   #   #    #     #   #   # ##  #    #"<<endl;
cout<<"  ##   ##  ##   #   #    ##     #      #   ##     ######  ##       #     ##     #  #     ##  ##  #   #  ##  ##  ##   #    #    #    #   #   # ##   #   #"<<endl;
cout<<"  ##   ##  ##    #  #    ##      #    #    #####  # #      ##      #     ##      #       ######  #    # ##      ##   #     #    #   #   #   # ##    #  #"<<endl;
cout<<"  ##   ##  ##     # #    ##       #  #     ##     #  #       ##    #     ##      #       ##  ##  #   #  ##      ##   #       #    # #   #   # ##      ##"<<endl;
cout<<"  #######  ##      ## #######      #       ###### #   #   ####   #####   ##      #       ##  ##  # #    ##      ## ##### ###  #### ###  ##### ##      ##"<<endl;
cout<<" "<<endl;

  
cout<<"       ##      ##  ####   #       #  ###  ######  #####  ##      ## #####  #       # ######       ### #     #  ### ##### ######  ##      ##"<<endl;
cout<<"       ## #  # ## ##  ##  #  #    # ## ## #    #  #      ## #  # ## #      #  #    #   ##         #    #   #   #     #   #       ## #  # ##"<<endl;
cout<<"       ##  ##  ## ##  ##  #   #   # ## ## #       #      ##  ##  ## #      #   #   #   ##          #    # #     #    #   #       ##  ##  ##"<<endl;
cout<<"       ##      ## ######  #    #  # ##### #       ####   ##      ## ####   #    #  #   ##           #    #       #   #   #####   ##      ##"<<endl;
cout<<"       ##      ## ##  ##  #     # # ## ## #  ##   #      ##      ## #      #     # #   ##            #   #        #  #   #       ##      ##"<<endl;
cout<<"       ##      ## ##  ##  #      ## ## ## #####   #####  ##      ## #####  #      ##   ##         ####   #      ###  #   ####### ##      ##"<<endl;}
void calculateAggregate(float mm,float im,float em,float agg){
cout<<"Enter your matric marks:";
cin>>mm;
cout<<"Enter your inter marks:";
cin>>im;
cout<<"Enter your ecat marks:";
cin>>em;
agg=((mm/1100)*30)+((im/550)*30)+((em/400)*40);
cout<<"Your Aggregate is:"<<agg<<endl;



}
void compareMarks(int m1,int m2,string n1,string n2){
cout<<"Enter name of first student:";
cin>>n1;
cout<<"Enter ecat marks of first student:";
cin>>m1;
cout<<"Enter name of second student:";
cin>>n2;
cout<<"Enter ecat marks of second student:";
cin>>m2;
if(m1>m2){
cout<<"First Roll No will be assigned to:"<<n1;
}
if(m2>m1){
cout<<"First Roll No will be assigned to:"<<n2;
}


}
main(){
int m1,m2;
float mm,im,em;
string n1,n2;
float agg;
printMenu();
calculateAggregate(mm,im,em,agg);


compareMarks(m1,m2,n1,n2);
}


