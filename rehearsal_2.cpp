#include<iostream>
using namespace std;
#include<string>

int main(){
    double sum=0.0;
    double x; 
    cout<<"Enter x:";
    cin>>x;
    while(x!=0)
    {
        if(x>0)
        {
            sum=sum+x; 
        }
        
        cout<<"Enter x:";
        cin>>x;
    }
        cout<<"sum = "<<sum;
   
}
