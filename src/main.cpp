#include "../include/lfour.h"


int main()
{
    L_FOUR::LFour& logger = L_FOUR::LFour::getInstance();

    logger.printExNum();

    logger.logMessage("This is a new test message");
    return 0;
}