#include <iostream>
#include <cmath>
#include <complex>
#include <sstream>

using namespace std;

int main()
{

    int num1;
    int num2;
    string choice;
    string multiply;
    string addition;
    string subtraction;
    string division;

    cout << "Please choose a number" << endl;
    cout << "1. muliplication" << endl;
    cout << "2. addition" << endl;
    cout << "3. subtraction" << endl;
    cout << "4. division." << endl;
    cout << "5. square root." << endl;
    cout << "6. Quadratic formula." << endl;
    cin >> choice;

    if (choice == "1")
    {

        int answer_mul;

        cout << "Enter the 2 numbers you would like to muliply:" << endl;

        cout << "Num 1: " << endl;
        cin >> num1;

        cout << "num 2: " << endl;
        cin >> num2;

        answer_mul = num1 * num2;

        cout << "The answer is " << answer_mul << "." << endl;
    }

    else if (choice == "2")
    {

        int answer_add;

        cout << "num 1:" << endl;
        cin >> num1;

        cout << "num 2:" << endl;
        cin >> num2;

        answer_add = num1 + num2;

        cout << "The answer is " << answer_add << "." << endl;
    }

    else if (choice == "3")
    {
        int answer_sub;

        cout << "num 1:" << endl;
        cin >> num1;

        cout << "num 2:" << endl;
        cin >> num2;

        answer_sub = num1 - num2;

        cout << "The answer is " << answer_sub << "." << endl;
    }
    else if (choice == "4")
    {
        int answer_div;

        cout << "num 1:" << endl;
        cin >> num1;

        cout << "num 2:" << endl;
        cin >> num2;
        if (num2 >> num1)
        {
            cout << "The answer will be a fraction of " << num1 << " over " << num2 << endl;
            cout << "and for the remainder..." << endl;
        }

        if (num2 == 0)
        {
            cout << "Error: can't divide by 0" << endl;
        }
        else
        {
            answer_div = num1 / num2;
            cout << "The answer is " << answer_div << "." << endl;
        }
    }

    else if (choice == "5")
    {
        int answer_sq;
        int num;

        cout << "num:" << endl;
        cin >> num;

        answer_sq = sqrt(num);

        cout << "The answer is: " << answer_sq << endl;
    }

    else if (choice == "6")
    {
        int a, b, c;

        cout << "Enter a: " << endl;
        cin >> a;
        cout << "Enter b: " << endl;
        cin >> b;
        cout << "Enter c: " << endl;
        cin >> c;

        double discriminant = b * b - 4 * a * c;

        ostringstream result;

        if (discriminant >= 0)
        {

            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            result << root1 << " and " << root2;
        }
        else
        {

            complex<double> root1 = complex<double>(-b, sqrt(-discriminant)) / (2.0 * a);
            complex<double> root2 = complex<double>(-b, -sqrt(-discriminant)) / (2.0 * a);
            result << root1 << " and " << root2;
        }

        cout << "The answer is " << result.str() << "." << endl;
    }
    else
    {
        cout << "invalid number choosen please try again." << endl;
    }

    return 0;
}