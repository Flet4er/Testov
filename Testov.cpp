// Testov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <algorithm>



using std::cin;
using std::cout;
using std::string;
using std::endl;


int main()
{
    int sizeLine;
    string theLine;
    string newLine;

    setlocale(LC_ALL, "");

    cout << "Выражение для преобразования: \n";
    getline(cin , theLine);
    std::transform(theLine.begin(), theLine.end(), theLine.begin(), tolower);
    newLine = theLine;
    sizeLine = theLine.size();
    cout << sizeLine << endl;

    //"(" - Один раз     ")" - два и больше раза
    int i = 0;    
    while (i < sizeLine-1)
    {
        int j = i + 1;
        while (j < sizeLine)
        {
            
            if (theLine[i] == theLine[j])
            {
                newLine[i] = ')';
                newLine[j] = ')';                
            }
            //cout << newLine << endl;
            j++;
        }
        i++;
    }
    // Все, что не ")" заменить на "()
    int k = 0;
    while (k < sizeLine)
    {
        if((theLine[k] == newLine[k]) && (theLine[k] ==')'))
        {
            newLine[k] == '(';
        }

        if (newLine[k] == ')')
        {

        }
        else
        {
            newLine[k] = '(';
        }
        //cout << newLine << endl;
        k++;
    }

    cout << "Преобразованное выражение: \n";
    cout << newLine<<endl;
}

