#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int a,b;
        cin>>a>>b;
        if(a>b)
        cout<<">\n";
        else if(a<b)
        cout<<"<\n";
        else
        cout<<"=\n";
    }
	return 0;
}
