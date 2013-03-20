#include <cstdio>
using namespace std;
int main() {
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int hcnt = n - 1, vcnt = m - 1;
	map<int> hlen, vlen;
	for(int i = 0; i < k; ++i) {
		int xb, yb, xe, ye;
		scanf("%d%d%d%d", &xb, &yb, &xe, &ye);
		if(xb == xe) {
			if(hlen.find(xb) == hlen.end())
				hlen[xb] = m;
			hlen[xb] -= ye - yb;
			if
		}
	}
}
