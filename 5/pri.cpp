#include <bits/stdc++.h>
using namespace std;

void Sieve(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    printf("The prime number are:\n");
    for (int p=2; p<=n; p++){
       if (prime[p]){
          cout << p << " ";
       }
    }
    cout<<endl;
}

int main()
{
    int n ;
    printf("Enter no of elements: ");
    scanf("%d",&n);

    Sieve(n);

    return 0;
}
