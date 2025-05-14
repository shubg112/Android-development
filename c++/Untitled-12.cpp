#include<iostream>
#include<string>

using namespace std;

string car(string cars){

    return("Mercedes"+cars);
}

int main(){
    cout<< car("benz");
    return 0;
}