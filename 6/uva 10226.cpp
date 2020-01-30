#include<bits/stdc++.h>

using namespace std;
map<string,int>mp;

int main()
{
    int t,i,j,cnt;
    string x;

    scanf("%d\n",&t);
    while(t--)
    {
        mp.clear();
        cnt=0;
        while(1)
        {
            getline(cin,x);
            if(x[0]=='\0')
                break;
            mp[x]++;
            cnt++;

        }
        map<string,int>:: iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<" ";
            cout << setprecision(4) <<fixed<< ((double)it->second/cnt)*100.00<<endl;
        }
        if(t>0)
            printf("\n");
    }
    return 0;
}
