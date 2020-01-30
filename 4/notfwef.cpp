#include <cstdio>
#include <cctype>

using namespace std;

int cnt[3];
long long ans;

int main(){
	char c;
	int acc = 0,flag=0;

	cnt[0] = 1;
	while (c = getchar())
    {

       if(c>='0' && c<='9' )
      {
		acc = (acc + c - '0') % 3;
		ans += cnt[acc];
		cnt[acc]++;
       }
	}

	printf("%lld\n", ans);

	return 0;
}


