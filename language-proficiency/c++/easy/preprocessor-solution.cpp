#include <iostream>
#include <vector>
using namespace std;

#define INF 100000000
#define io(v) int l=0; cin>>l; vector <int> vv(v.size()); vv[i]=l; v[i]=vv 
#define toStr(s) #s
#define foreach(v,i) for(int i=0;i<n;i++)
#define FUNCTION(a,b) void a(int& x,int& y){if( y b x ) x=y;}

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 


FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
}