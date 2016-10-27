#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL) ;
	for(int i=0;i<=5;i++){
        for(int j=0;j<=12+4-i;j++){
            cout<<"g";
        }
        cout<<"/";
        for(int j=0;j<(2*i);j++){
            cout<<"h";
        }
        cout<<"\\";
        for(int j=0;j<=12-i+4;j++){
            cout<<"j";
        }
        cout<<endl;
	}
	for(int i=1;i<=36;i++){
        cout<<"-";
	}
	cout<<endl;
	for(int i=0;i<=5;i++){
        for(int j=0;j<i;j++){
            cout<<"a";
        }
        cout<<"\\";
        for(int j=10-(2*i)-1;j>=0;j--){
            cout<<"b";
        }
        cout<<"/";
        for(int j=0;j<i;j++){
            cout<<"e";
        }
        for(int j=0;j<12+i;j++){
            cout<<"e";
        }
        cout<<"\\";
        for(int j=0;j<12-(2*i)-2;j++){
            cout<<"h";
        }
        cout<<"/";
        for(int j=0;j<i;j++){
            cout<<"s";
        }
        cout<<endl;
	}
	for(int i=0;i<=5;i++){
        for(int j=0;j<=5-i-1;j++){
            cout<<"c";
        }cout<<"/";
        for(int j=0;j<(2*i);j++){
            cout<<"d";
        }
        cout<<"\\";
        for(int j=0;j<5-i;j++){
            cout<<"f";
        }
        for(int j=0;j<12+5-i;j++){
            cout<<"f";
        }
        cout<<"/";
        for(int j=0;j<(2*i);j++){
            cout<<"i";
        }
        cout<<"\\";
        for(int j=0;j<5-i;j++){
            cout<<"t";
        }
        cout<<endl;
	}
	for(int i=1;i<=36;i++){
        cout<<"-";
	}
	cout<<endl;
        for(int i=0;i<=5;i++){
        for(int j=0;j<=16-4+i;j++){
            cout<<"k";
        }
        cout<<"\\";
        for(int j=0;j<(2*(5-i));j++){
            cout<<"l";
        }
        cout<<"/";
        for(int j=0;j<=12-5+i+3;j++){
            cout<<"u";
        }
        cout<<endl;
	}
	return 0;
}
