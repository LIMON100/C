#include<bits/stdc++.h>
using namespace std;
char str[1000][40];

struct node
{
    int count;
    node* next[26];
    node()
    {
        count=0;
        int i;
        for(int i=0; i<26; i++)
        {
            next[i]=NULL;
        }
    }
};
node* root;
node *current,*newnode;

void add(char* str)
{
    int m;
    current=root;
    for(int i=0; i<strlen(str); i++)
    {
        m=str[i]-'a';
        if(current->next[m]!=NULL)
        {
            current=current->next[m];
            ++(current->count);
        }

        else
        {
            newnode=new node;
            ++(newnode->count);
            current->next[m]=newnode;
            current=newnode;

        }
    }
}

void check(char* str)
{
    current=root;
    char ans[26];
    for(int i=0; i<strlen(str); i++)
    {
        int m=str[i]-'a';
        current=current->next[m];
        ans[i]=str[i];
        ans[i+1]='\0';
        if(current->count==1)
        {
            printf("%s %s",str,ans);
            return;
        }
    }
    printf("%s %s",str,ans);
}

int main()
{
    int i,n=0;
    root=new node;
    while(scanf("%s",str[n])!=EOF)
    {
        add(str[n]);
        n++;
    }

    for(i=0; i<n; i++)
    {
        check(str[i]);
        cout<<endl;
    }

    return 0;
}
