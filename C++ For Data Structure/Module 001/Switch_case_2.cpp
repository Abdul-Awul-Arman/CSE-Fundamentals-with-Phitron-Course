#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cin>>alphabet;

    switch(alphabet)
    {
        case 'a':
        cout<<"Vowel";
        break;

        case 'i':
        cout<<"Vowel";
        break;

        case 'u':
        cout<<"Vowel";
        break;

        case 'o':
        cout<<"Vowel";
        break;

        case 'e':
        cout<<"Vowel";
        break;

        case 'y':
        cout<<"Spacial Vowel";
        break;

        default:
        cout<<"Consonent";
    }
    return 0;
}