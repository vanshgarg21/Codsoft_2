#include <iostream>
using namespace std;
int main()
{
// initialising the variables
    float firstNumber, secondNumber;
    float Answer;
    int choice;
    char ch;
    cout<<"      ** CALCULATOR **"<<endl;
    cout<<"----------------------------"<<endl;
    do
    {
        cout<<"1) Addition\n";     // first choice addition
        cout<<"2) Subtraction\n";   // second choice subtraction
        cout<<"3) Multiplication\n";   // third choice multiplication
        cout<<"4) Division\n";        //fourth choice divison
        cout<<"5) Exit\n\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\n -> Enter First Numbers: ";
            cin>>firstNumber;
            cout<<endl;
            cout<<"\n -> Enter second Number: ";
            cin>>secondNumber;
        }
        switch(choice)
        {
            case 1:
                Answer = firstNumber+secondNumber;
                cout<<"\n Your Sum  = "<<Answer;
                break;
            case 2:
                Answer= firstNumber-secondNumber;
                cout<<"\n Your Difference = "<<Answer;
                break;
            case 3:
                Answer = firstNumber*secondNumber;
                cout<<"\nYour Answer = "<<Answer;
                break;
            case 4:
                Answer = firstNumber/secondNumber;
                cout<<"\nYour Remainder = "<<Answer;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
         cout<<"Do you want to exit ?(y/n)"<<endl;
        cin>>ch;
    }while(ch=='n');
    cout<<endl;
    return 0;
}