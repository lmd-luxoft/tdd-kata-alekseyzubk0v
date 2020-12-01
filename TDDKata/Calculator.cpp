#include "pch.h"
#include "Calculator.h"

int Calculator::Add(std::string expression)
{
    return 0;
}

int Calculator::Add(char* expression)
{

    char* istr;

    // Дублирование строки
    istr = strdup(expression);

    if (strstr(expression, "-") != NULL) {
        return -2;
    };

    int len = strlen(expression);
    if (len == 0) {
        return 0;
    };

    int result = 0;
    char* pch = strtok(istr, ",");
    while (pch != NULL)                         // пока есть лексемы
    {
        int arg = atoi(pch);
        if ((arg > 9) || (arg < 0)) {
            return -1;
        }
        result += arg;
        pch = strtok(NULL, ",");
    }

    return result;
}
