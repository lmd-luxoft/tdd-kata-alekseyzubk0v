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

    if (strstr(istr, "-") != NULL) {
        return -2;
    };

    int len = strlen(istr);
    if (len == 0) {
        return 0;
    };

    int result = 0;

    char * delim = ",";
    char tempDelim[50];
    int lencmd = 0;
    int scanres = sscanf(istr, "//%s\n", tempDelim);
    if (scanres == 1) {
        delim = tempDelim;
        lencmd = 3 + strlen(tempDelim);
    }

    char* pch = strtok(istr + lencmd, delim);
    while (pch != NULL)                         // пока есть лексемы
    {  
        int lenLex = strlen(pch);
        char * lexema = strdup(pch);

        if (*lexema == '\n') {
            return -1;
        };

        if (*(lexema + lenLex - 1) == '\n') {
            return -1;
        }

        char* pn = strtok(lexema, "\n");
        while (pn != NULL) {
            char* temp;
            int arg = strtol(pn, &temp, 10);
            if (*temp != '\0') {
                return -1;
            }
            if ((arg > 9) || (arg < 0)) {
                return -1;
            }
            result += arg;
            pn = strtok(NULL, "\n");
        }
        char* temp = pch + lenLex + 1;

        if (temp > istr + len) {
            break;
        }

        pch = strtok(pch + lenLex + 1, delim);
    }

    return result;
}
