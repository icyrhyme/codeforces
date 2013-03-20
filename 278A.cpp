#include <cstdio>
#include <algorithm>
#define MAXN 128
using namespace std;
int main() {
	int n, a[MAXN], sum[MAXN], tot = 0;
	scanf("%d", &n);
	sum[0] = 0;
	for(int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		sum[i + 1] = a[i] + sum[i];
		tot += a[i];
	}
	int x, y;
	scanf("%d%d", &x, &y);
	--x, --y;
	if(x > y)
		swap(x, y);
	int d = sum[y] - sum[x];
	if(tot - d < d)
		printf("%d\n", tot - d);
	else
		printf("%d\n", d);
	return 0;
}
