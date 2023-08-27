#include<iostream>
using namespace std;


void add();
void sub();
void mul();
void div();


int main()
{
    int op;
    while(1)
    {
        cout<<"\t--------CALCULATOR--------\n";
        cout<<"0.Exit\n";
        cout<<"1.Addition\n";
        cout<<"2.Substraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.Division\n";
        cout<<"Enter the operation you want to perform: ";
        cin>>op;
        switch(op)
        {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 0:
                cout<<"\t--------Exiting Calculator--------\n\n\n";
                exit(0);
                break;
            default:
                cout<<"Enterd choice is invalid. Please Enter a valid choice.\n\n\n";
                break;
            
        }
    }

    return 0;
}



void add()
{
    float n1,n2;
    cout<<"Enter the numbers you want to add: ";
    cin>>n1>>n2;
    cout<<"Addtion of "<<n1<<" and "<<n2<<": "<<n1+n2<<"\n\n\n";
}


void sub()
{
    float n1,n2;
    cout<<"Enter the numbers you want to add: ";
    cin>>n1>>n2;
    cout<<"Substraction of "<<n1<<" and "<<n2<<": "<<n1-n2<<"\n\n\n";
}



void mul()
{
    float n1,n2;
    cout<<"Enter the numbers you want to add: ";
    cin>>n1>>n2;
    cout<<"Multiplication of "<<n1<<" and "<<n2<<": "<<n1*n2<<"\n\n\n";
}



void div()
{
    float n1,n2;
    cout<<"Enter the numbers you want to add: ";
    cin>>n1>>n2;
    if(n2==0)
    {
        cout<<"Division with zero is not possible.\n\n\n";
    }
    else
    {
        cout<<"Division of "<<n1<<" and "<<n2<<": "<<n1/n2<<"\n\n\n";
    }
    
}