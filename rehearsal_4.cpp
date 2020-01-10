#include <iostream>
using namespace std;
string conpress(string A){
	int a=A.size();
	if(a>0){
		int i=0;
		string C;
		while(i<a){
			C=C+A[i];
			i=i+3;
		}
		return C;
	}	

}
int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
