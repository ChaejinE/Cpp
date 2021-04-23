#include <iostream>
#include <stdexcept>
#include "Caculator.h"

int main(void)
{
    int num1; 
    double num2;
    double result;
    char operation, equal;
    char* s;

    while (true)
    {
        cout << "A (+,-,*,/) B = 꼴로 입력해주세요" << endl;
        cin >> num1 >> operation >> num2 >> equal;
        try
        {
            if (equal = '=')
            {
                Calculator<int, double, double> calc(num1, num2, operation);
                switch(operation)
                {
                    case '+':
                        result = calc.Plus();
                        break;
                    case '-':
                        result = calc.Minus();
                        break;
                    case '*':
                        result = calc.Multiply();
                        break;
                    case '/':
                        result = calc.Divide();
                        break;
                    default:
                        continue;
                }
            }
        }
        catch (runtime_error e)
        {
            cout << e.what() << "-> " << endl;
            exit(0);
        }
        
        cout << num1 << ' ' << operation << ' ' << num2 << ' ' << equal << ' ' << result << endl;

        cout << "종료 ? yes 또는 no 입력" << endl;
        cin >> s; 
        if (s == "yes" || s == "Yes")
            break;
    }

    return 0;
}
