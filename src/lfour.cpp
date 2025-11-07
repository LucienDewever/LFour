#include "../include/lfour.h"
#include <stdio.h>
namespace L_FOUR
{
    LFour& LFour::getInstance()
    {
        static LFour logInst;
        return logInst;
    }

    void LFour::logMessage(const char* message)
    {
        printf("you logged: %s\n", message);
        fflush(stdout);
    }

    LFour::LFour()
    {

    }

    LFour::~LFour()
    {

    }

    void LFour::printExNum()
    {
        printf("The value of Print ExNum is: %d\n", exNum);
    }
}