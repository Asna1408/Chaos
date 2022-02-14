#include<iostream>

using namespace std;

int main (){

    double a,b;

    int x;

    cout << "Please select your operation to be implemented\n";

    cout << "Enter:\n";

    cout <<"1 for Addition\n";

    cout <<"2 for Substraction\n";

    cout <<"3 for Multiplication\n";

    cout <<"4 for Division\n";

    cin >>x;

    cout <<"Enter two numbers to implement this operation:\n";

    cin >>a>>b;

    switch(x)

    {

        case 1:

        cout<<"You have selected addition operation\n";

        cout<<"Result is: "<<a+b;

        break;

        case 2:

        cout<<"You have selected substraction operation\n";

        cout<<"Result is: "<<a-b;

        break;

        case 3:

        cout<<"You have selected multiplication operation\n";

        cout<<"Result is: "<<a*b;

        break;

        case 4:

        cout<<"You have selected division operation\n";

        cout<<"Result is: "<<a/b;

        break;

    }

    return 0;

    }
