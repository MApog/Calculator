#include <iostream>

using namespace std;

int main () {
//making variables
    char usr;
    double a,b;

cout<<"\n";
//taking in the first number
    cout<<"Please enter the first number: ";
    cin>>a;

cout<<"\n";
//taking in the operator
    cout <<"Now please enter the operation (+,-,/,*): ";
    cin >>usr;

cout<<"\n";
//taking in the second number
    cout<<"Please enter the second number: ";
    cin>>b;

cout<<"\n";
//making different output on different operation
    switch (usr) {
        //gives output of addition
        case '+':
            cout<< " The addition of " << a << " and " << b << " = " << (a + b) << "\n";
        break;
            //gives output of subtraction
            case '-':
            cout<< "The subtraction of "  << a << " and " << b << " = " << (a - b) << "\n";
        break;
            //gives output of multiplication
            case '*':
            cout<< " The multiplication of " << a << " and " << b << " = " << (a * b) << "\n";
           break;
            //gives output of division
            case '/':
                 if ( b != 0.0)
                   cout<< " The division of " << a << "and" << b << "=" << (a / b) << "\n";
                 else
                   cout<< " You cannot divide a number by zero, please enter a valid number";
           break;

            //gives an error message if the other character is given in place of the operator
            default:
                cout << usr << "is an invalid operation symbol \n";
    }

    cout<< "\n";


   return 0;


}
