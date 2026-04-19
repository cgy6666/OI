#include <bits/stdc++.h>
using namespace std;
const int P = 131;
int n,a[20005],ans;
int gethaxi(string s){
	int res = 0;
	for (int i = 0;i < s.size();i++) res = res*P+s[i];
	return res;
}
int main(){
	cin >> n;
	string tmp;
	for (int i = 1;i <= n;i++){
		cin >> tmp;
		a[i] = gethaxi(tmp);
		ans++;
		for (int j = 1;j <= i-1;j++)
			if (a[i] == a[j]){
				ans--;
				break;
			}
	}
	cout << ans;
	return 0;
}
