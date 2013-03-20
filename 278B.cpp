#include <string>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> vs(n);
	for(int i = 0; i < n; ++i) {
		cin >> vs[i];
	}
	queue<string> q;
	for(char c = 'a'; c <= 'z'; ++c) {
		string s(1, c);
		q.push(s);
	}
	while(!q.empty()) {
		string s = q.front();
		q.pop();
		int i;
		for(i = 0; i < vs.size(); ++i) {
			if(vs[i].find(s) != string::npos)
				break;
		}
		if(i == vs.size()) {
			cout << s << endl;
			break;
		}
		for(char c = 'a'; c <= 'z'; ++c) {
			q.push(s + c);
		}
	}
	return 0;
}
