#include <cstdio>
#include <cstring>
#define MAXL 1000005
using namespace std;
int countOnes(char s[]) {
	int cnt = 0;
	for(int i = 0; s[i]; ++i)
		if(s[i] == '1')
			cnt++;
	return cnt;
}
int main() {
	char s[MAXL], t[MAXL];
	scanf("%s%s", s, t);
	int slen = strlen(s), tlen = strlen(t);
	int scnt = countOnes(s), tcnt = countOnes(t);
	if(slen != tlen || scnt == 0 && tcnt > 0 || tcnt == 0 && scnt > 0)
		puts("NO");
	else
		puts("YES");
	return 0;
}
