#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
	cin>>t;
	string s;
	cin>>s;
	while(t--){
		char c;
		string t="";
		for(int j=0;j<10;j++)
        {
			t+="0";
		}
		for(int i=1;i<=10;i++)
        {
			cout<<i<<endl;
			cout.flush();
			cin>>c;
			t[i-1]=c;
		}
		cout<<t<<endl;
		cout.flush();
		char ch;
		cin>>ch;
		if(ch=='Y')
		    continue;
		else 
		    return 0;
	}
	return 0;
}

