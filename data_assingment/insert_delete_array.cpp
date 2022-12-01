#include <bits/stdc++.h>
using namespace std;
void ins(int n,vector<int>&a)
{
    int pos,val;
    cout<<"index position:";
    cin>>pos;
    cout<<"element value:";
    cin>>val;
    n++;
    for(int i=n-1; i>=pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=val;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    system("pause");
}
void del(int n,vector<int>&a)
{
    int pos;
    cout<<"index position:";
    cin>>pos;
    for(int i=pos; i<n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    system("pause");
}
int main()
{
    int n,choice;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i <n; ++i)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    system("pause");
    do
    {
        system("cls");
        cout<<"----array_menu----"<<"\n";
        cout<<" 1.insert element"<<"\n";
        cout<<" 2.delete element"<<"\n";
        cout<<" 3.exit "<<"\n";
        cout<<"choice option in array"<<"\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"after insert print the array"<<"\n";
            ins(n,a);
            break;
        case 2:
            cout<<"after delete print the array"<<"\n";
            del(n,a);
            break;

        case 3:
            exit(0);
            break;
        }
    }
    while(1);
    return 0;
}
