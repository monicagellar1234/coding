#include <iostream>
using namespace std;
int main()
{
    int age_of_man=0;
    cout<<"Enter the age of the man: ";
    cin>>age_of_man;

   switch(age_of_man)
    {
        case 18:
        cout<<"you are 18 years old";
        break;
        case 21:
        cout<<"you are 21 years old";
        break;
        default:
        cout<<"you are neither 18 nor 21";
        break;
    }
    if (age_of_man<1 || age_of_man>150)
    {
        cout<<"Age is invalid";

    }
    else if (age_of_man>=18)
    {
        cout<<"you are eligible to vote";
    }
    else{
        cout<<"you are not eligible to vote";
    }




return 0;
}
