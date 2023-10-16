#include <iostream>
#include <cctype>
#include "stack.h"

int main(){
    using namespace std;
    Stack st;
    char ch;
    char fullname[35];
    double pay;
    Item item;
    double sum_pay;
    cout<<"Enter A to add, P to pop, Q to quit.\n";
    while(cin>>ch && toupper(ch)!='Q'){
        while (cin.get()!='\n')
            continue;
        if(!isalpha(ch)){
            cout<<'\a';
            continue;
        }
        switch (ch){
            case 'A':
            case 'a':   cout<<"Enter a name and payment to add:";
                        cin.get(fullname,35);
                        cin>>pay;
                        if(st.isfull())
                            cout<<"stack already full\n";
                        else
                            st.push(Item(fullname,pay));
                        break;
            case 'P':
            case 'p':   if(st.isempty())
                            cout<<"stack already empty\n";
                        else{
                            st.pop(item);
                            sum_pay += item.payment;
                            cout<<"tatal payment: "<<sum_pay<<endl;
                        }
                        break;
        }
        cout<<"Enter A to add, P to pop, Q to quit.\n";
    }
    cout<<"Bye.\n";
    return 0;
}