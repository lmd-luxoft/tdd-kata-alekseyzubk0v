#include "pch.h"
#include "Calculator.h"

int Calculator::Add(std::string expression)
{
    return 0;
}

int Calculator::Add(char* expression)
{

    char* istr;

    // ������������ ������
    istr = strdup(expression);

    if (strstr(istr, "-") != NULL) {
        return -2;
    };

    int len = strlen(istr);
    if (len == 0) {
        return 0;
    };

    int result = 0;
    char* pch = strtok(istr, ",");
    while (pch != NULL)                         // ���� ���� �������
    {  
        len = strlen(pch);
        char * lexema = strdup(pch);
        char* pn = strtok(lexema, "\n");
        while (pn != NULL) {
            int arg = atoi(pn);
            if ((arg > 9) || (arg < 0)) {
                return -1;
            }
            result += arg;
            pn = strtok(NULL, "\n");
        }

        pch = strtok(pch + len + 1, ",");
    }

    return result;
}
