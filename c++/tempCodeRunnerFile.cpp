#include<iostream>
#include<string>

using namespace std;

int myFunction(int x,int y){
    return x+y;

}

int main(){
    int z = myFunction(45,7);
    cout<< z;
    return 0;
}