#include<bits/stdc++.h>
using namespace std;
// using of switch conditional
int main()
{
    // switch case 1
    int value;
    cout<<"enter the value : ";
    cin>>value;
    switch(value)
    {
        case 1:
            cout<<"One";
            break;
        case 2: 
            cout<<"Two";
            break;
        case 3:
            cout<<"Three";
            break;
        case 4:
            cout<<"Four";
            break;
        case 5:
            cout<<"Five";
            break;
        default:
            cout<<"Didn't match.";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// check weather a character vowel or consonant using switch statement
int main()
{
    char ch;
    cout<<"Input the character : ";
    cin>>ch;
    switch(ch)
    {
        case 'a':
            cout<<"Vowel";
            break;
        case 'e':
            cout<<"Vowel";
            break;
        case 'i':
            cout<<"Vowel";
            break;
        case 'o':
            cout<<"Vowel";
            break;
        case 'u':
            cout<<"Vowel";
            break;
        default:
            cout<<"Consonant";
    }
}

#include<bits/stdc++.h>
using namespace std;
// check weather a number even or odd using switch case
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    switch(n%2) // we will send the mod of the number which will be 0 or 1
    {
        case 0:
            cout<<"Even";
            break;
        default:
            cout<<"Odd";
    }
    return 0;
}