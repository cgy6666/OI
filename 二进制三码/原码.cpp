#include <bits/stdc++.h>
using namespace std;
int x,a[1000005];
int main(){
	cin >> x;
	if (x < 0){
		x = -x;
		a[32] = 1;
	}
	int cnt = 0;
	while (x){
		a[++cnt] = x % 2;
		x /= 2;
	}
	for (int i = 32;i > 0;i--) cout << a[i];
	return 0;
}
