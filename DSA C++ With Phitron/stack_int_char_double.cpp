#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>Character_Stack;
    stack<int>Integer_Stack;
    stack<double>Double_Stack;

    Character_Stack.push('T');
    Character_Stack.push('O');
    Character_Stack.push('W');
    Character_Stack.push('S');
    Character_Stack.push('I');
    Character_Stack.push('F');

    Integer_Stack.push(2);
    Integer_Stack.push(0);
    Integer_Stack.push(0);
    Integer_Stack.push(2);

    Double_Stack.push(5.11);
    Double_Stack.push(58.32);

    while(!Character_Stack.empty())
    {
        cout<<"The character is me : "<<Character_Stack.top()<<endl;
        Character_Stack.pop();
    }

    while(!Integer_Stack.empty())
    {
        cout<<"The character is me : "<<Integer_Stack.top()<<endl;
        Integer_Stack.pop();
    }

    while(!Double_Stack.empty())
    {
        cout<<"The character is me : "<<Double_Stack.top()<<endl;
        Double_Stack.pop();
    }
}