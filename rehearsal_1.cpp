#include<iostream>
using namespace std;
#include<string>

int main(){
    string Nam;
    double GPA;
    cout<<"What is your name?:";
    cin >> Nam;
    cout<<"What is your GPA?:";
    cin >> GPA;
    if(GPA>=3.5){
        cout<<Nam<<" Inw Jrim Jrim!!!";
    }
    else
    {
        cout<<"Try harder,"<<" "<<Nam<<"!!!";
    }
    

}