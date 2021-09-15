/*
 A program that output the Dates of August in English
 @Author Xinyu Li.   
 Sep, 2021
*/
#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){

    cout << "Input a number of days in August: ";
    int number;
    cin >> number;

    const int singles = number % 10;
    const int tens = number / 10;

    if (tens == 1){
        switch (singles)
        {
        case 1:
        cout << "eleven";
        break;
        case 2:
            cout << "tweleve";
            break;
        case 3:
            cout << "thirteen";
            break;
        case 4:
            cout << "fourteen";
            break;
        case 5:
            cout << "fifteen";
            break;
        case 6:
            cout << "sixteen";
            break;
        case 7:
            cout << "seventeen";
            break;
        case 8: 
            cout << "eighteen";
            break;
        case 9:
            cout << "nineteen";
            break;
        case 0:
            cout << "ten";
        }
        cout<<endl;
    } 
    else {
        // Print tens digit
        switch (tens)
        {
        case 2:
            cout<<"twenty";
            break;
        case 3:
            cout<<"thirty";
        default:
            break;
        }

        // Print singe digit
        switch (singles)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        default:
            break;
        }
    }

  cout<<endl;

  return 0;
}


