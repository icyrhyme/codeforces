#include <cstdio>
#include <vector>
using namespace std;
class DisjointSet {
	vector<int> v;
public:
	DisjointSet(int sz): v(sz, -1) {}
	int find(int x) {
		if(v[x] < 0)
			return x;
		else
			return v[x] = find(v[x]);
	}
	void setUnion(int x, int y) {
		int rx = find(x);
		int ry = find(y);
		//printf("%d, %d, %d, %d\n", x, y, rx, ry);
		if(rx != ry) {
			if(v[rx] < v[ry]) {
				v[rx] += v[ry];
				v[ry] = rx;
			}
			else {
				v[ry] += v[rx];
				v[rx] = ry;
			}
		}
	}
	int countSets(int n) {
		int cnt = 0;
		for(int i = 0; i < v.size(); ++i)
			if(i < n && v[i] < 0 || i >= n && v[i] < -1)
				++cnt;
		return cnt;
	}
};
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	DisjointSet s(n + m);
	bool allzero = true;
	for(int i = 0; i < n; ++i) {
		int k;
		scanf("%d", &k);
		if(k != 0)
			allzero = false;
		for(int j = 0; j < k; ++j) {
			int l;
			scanf("%d", &l);
			s.setUnion(i, n + l - 1);
		}
	}
	int ans = (allzero ? s.countSets(n) : s.countSets(n) - 1);
	printf("%d\n", ans);
	return 0;
}
