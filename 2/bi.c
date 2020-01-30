#include <stdio.h>
#include <math.h>
int main()
{
    int tree[100],left,right,root,g,i,child,n;
    scanf("%d",&g);
    n=pow(2,g)-1;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&tree[i]);
    }
    printf("Child adress: ");
    scanf("%d",&child);
    root=child/2;
    printf("\nRoot of %d in %d",tree[child],tree[root]);
    printf("\nEnter Address of root =");
    scanf("%d",&root);
    left=2*root;
    right=(2*root)+1;

     if(tree[left]==0)
        printf("There is no Left Child\n");
    else
        printf("\nLeft child of %d is %d\n",tree[root],tree[left]);
    if(tree[right]==0)
        printf("There is no Right Child\n");
    else
        printf("\nRight child of %d is %d\n",tree[root],tree[right]);
    return 0;
}
