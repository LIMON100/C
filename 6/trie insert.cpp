#include<bits/stdc++.h>
using namespace std;

struct node
{
    bool mark;
    node* next[26+1];
    node()
    {
        for(int i=0; i<26; i++)
        {
            next[i]=NULL;
        }
    }
};
node* root;

void insert(char *str,int l)
{
    node* current=root;
    for(int i=0; i<l; i++)
    {
        int id=str[i]-'a';
        if(current->next[id]==NULL)
        {
            current->next[id]=new node();
        }
        current=current->next[id];

    }
    current->mark=1;
}

bool search(char *str,int l)
{
    node* current=root;
    for(int i=0; i<l; i++)
    {
        int id=str[i]-'a';
        if(current->next[id]==NULL)
        {
            return false;
        }
        current=current->next[id];

    }
    return current->mark;
}

void dlt(node* current)
{
    current=root;
    for(int i=0; i<26; i++)
    {
        if(current->next[i])
           delete(current->next[i]);
        delete(current);
    }
}

int main()
{
    int n,q;
     root=new node();
    printf("Enter no of words: ");
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char str[100];
        cin>>str;
        insert(str,strlen(str));
    }

    printf("Enter no of question: ");
    cin>>q;
    for(int i=0; i<q; i++)
    {
        char str[100];
        cin>>str;
        if(search(str,strlen(str)))
        {
            printf("FOUND\n");
        }
        else
        {
            printf("NOT FOUND.\n");
        }
    }
    dlt(root);
    return 0;
}
