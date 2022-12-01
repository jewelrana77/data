#include <bits/stdc++.h>
using namespace std;
class Stack{
public:
    int top=0;
    int a[10];
    void ins(){
        if(top>10){
            exit(0);
        }
    int x;
    cout<<"insert element:";
    cin>>x;
    a[top]=x;
    top++;
    }
    void del(){
    top=top-1;
    }
    void display(){
        if(top==0){
            cout<<"stack is empty,yis garib ko kiso dedo"<<"\n";
        }
        cout<<"print the stack value:";
    for(int i=0;i<top;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    system("pause");
    }
};
int main()
{
    Stack st;
    int n,choice;
    st.display();
    cout<<"\n";
    system("pause");
    do
    {
        system("cls");
        cout<<"----stack_menu----"<<"\n";
        cout<<" 1.insert element in stack"<<"\n";
        cout<<" 2.delete element in stack"<<"\n";
        cout<<" 3.exit "<<"\n";
        cout<<"choice option in array"<<"\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"after insert print the array"<<"\n";
            st.ins();
            st.display();
            break;
        case 2:
            cout<<"after delete print the array"<<"\n";
            st.del();
            st.display();
            break;

        case 3:
            exit(0);
            break;
        }
    }
    while(1);
    return 0;
}
