#include <iostream>
#include   <cstdlib>
#include <ctime>
using namespace std;

void tkt_type(){
    cout << "\t\t**Developed By Imaan**\n";
    cout<<"\n";
    cout <<"\tA: one adult.\n"<< endl;
    cout <<"\tB: one child (an adult may bring up to two childern).\n"<< endl;
    cout <<"\tC: one senior.\n"<< endl;
    cout <<"\tD: family ticket (up to two adults or seniors, and three children).\n"<< endl;
    cout <<"\tE: groups of six people or more, price per person.\n"<< endl;
}
void cost_day(string tkt_type){
    cout << endl;

    if(tkt_type == "a"){
        cout << "\t1. Cost for one day: $20.00\n";
        cout << "\t2. Cost for two days: $30.00\n";
    }else if(tkt_type == "b"){
        cout << "\t1. Cost for one day: $12.00\n";
        cout << "\t2. Cost for two days: $18.00\n";
    }else if(tkt_type == "c"){
        cout << "\t1. Cost for one day: $16.00\n";
        cout << "\t2. Cost for two days: $24.00\n";
    }else if(tkt_type == "d"){
        cout << "\t1. Cost for one day: $60.00\n";
        cout << "\t2. Cost for two days: $90.00\n";
    }else if(tkt_type == "e"){
        cout << "\t1. Cost for one day: $15.00\n";
        cout << "\t2. Cost for two days: $22.50\n";
    }
    else{
        cout<<"error";
    }
    cout << endl;
}
void cost_1day(string tkt_type, int day){
    double cost;
    if(tkt_type == "a" && day == 1 ){
        cout << "\tCost for one day: $20.00\n";
        cost = cost + 20.00;
    }else if(tkt_type == "b" && day == 1){
        cout << "\tCost for one day: $12.00\n";
        cost = cost + 12.00;
    }else if(tkt_type == "c" && day == 1){
        cout << "\tCost for one day: $16.00\n";
        cost = cost + 16.00;
    }else if(tkt_type == "d" && day == 1){
        cout << "\tCost for one day: $60.00\n";
        cost = cost + 60.00;
    }else if(tkt_type == "e" && day == 1){
        cout << "\tCost for one day: $15.00\n";
        cost = cost + 15.00;
    }
    else{
        cout<<"error";
    }
    cout << endl;
    cout << "\tExtra attraction\n";
    cout << "A: lion feeding----$2.50\n";
    cout << "B: penguin feeding-$2.00\n";
    cout << "c: none\n";
    cout << endl;

    string pick;
    cout<<"------------------------------------------------------\n";
    cout<<"Enter a value:";
    cin >> pick;
    cout << endl;

    if(pick == "a"){
        cout << "Total: $"<<cost + 2.50<<endl;
    }else if(pick == "b"){
        cout <<  "Total: $"<<cost + 2.00<<endl;
    }else if(pick == "c"){
        cout <<  "Total: $"<<cost<<endl;
    }


}
void cost_2day(string tkt_type, int day){
    cout<<"\n";
    double cost;

     if(tkt_type == "a" && day == 2){
        cout << "\tCost for two days: $30.00\n";
        cost = cost + 30.00;
    }else if(tkt_type == "b" && day == 2){
        cout << "\tCost for two days: $18.00\n";
        cost = cost + 18.00;
    }else if(tkt_type == "c" && day == 2){
        cout << "\tCost for two days: $24.00\n";
        cost = cost + 24.00;
    }else if(tkt_type == "d" && day == 2){
        cout << "\tCost for two days: $90.00\n";
        cost = cost + 90.00;
    }else if(tkt_type == "e" && day == 2){
        cout << "\tCost for two days: $22.50\n";
        cost = cost + 22.00;
    }
    else{
        cout<<"error";
    }
    cout << endl;
    cout << "\tExtra attraction\n";
    cout << "A: lion feeding----------------------------$2.50\n";
    cout << "B: penguin feeding-------------------------$2.00\n";
    cout << "C: evening barbecue (two-day tickets only)-$5.00\n";
    cout << "D: none\n";
    cout << endl;

    string pick;
    cout<<"------------------------------------------------------\n";
    cout<<"Enter a value:";
    cin >> pick;
    cout << endl;

    if(pick == "a"){
        cout << "Total: $"<<cost + 2.50<<endl;
    }else if(pick == "b"){
        cout <<  "Total: $"<<cost + 2.00<<endl;
    }else if(pick == "c"){
        cout <<  "Total: $"<<cost+ 5.00<<endl;
    }else if(pick == "d"){
        cout <<  "Total: $"<<cost<<endl;
        
    }
}

void bookingNumber(){
    srand(time(0));
    cout << (rand()% ( 2000 - 1 + 1 ));

}




int main(){
    tkt_type();
    string tkt_ty;
    cout<<"------------------------------------------------------\n";

    cout << " Enter a value:"; 
    cin >> tkt_ty;
    cost_day(tkt_ty);

    int day;
    cout<<"------------------------------------------------------\n";

    cout << " Enter how many days:";
    cin >> day;
    if(day == 1){
    cost_1day(tkt_ty,day);
    }else if(day == 2){
     cost_2day(tkt_ty,day);
    }else{
        cout<<"error";
    }

    cout << "Your Booking number is: ";
    bookingNumber();
    cout<<endl;
    cout << endl;


  system("pause");
}