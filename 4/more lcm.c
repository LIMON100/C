#include<stdio.h>
typedef long long int ll;

int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b, a%b);
}


ll findlcm(int arr[], int n)
{
    int i;
    ll ans = arr[0];

    /// ans contains LCM of arr[0],..arr[i]
    /// after i'th iteration,
    for ( i=1; i<n; i++)
        ans = ( ((arr[i]*ans)) /
                (gcd(arr[i], ans)) );

    return ans;
}

// Driver Code
int main()
{
    int arr[] = {16,48,64,80,112};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%lld", findlcm(arr, n));
    return 0;
}
