#include<iostream>
#include<string>

using namespace std;


    struct car{
        string brand;
        string model;
        int year;

    };


    int main(){
        car myCar;
        myCar.brand = "Mercedes-Benz\n";
        myCar.model = "S14\n";
        myCar.year = 2026;

    

    cout<<myCar.brand<<""<<myCar.model<<""<<myCar.year<<endl;
    return 0;
}