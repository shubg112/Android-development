#include<iostream>
#include<string>

using namespace std;

int main(){

    string cars[]={"Mercedes","Audi","Jaguar","BMW","Ferrari"};

    for(string A : cars){
        cout<<A<<endl;
    }
}