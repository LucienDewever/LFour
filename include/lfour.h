#include <stdint.h>

namespace L_FOUR
{

class LFour{
    public:

        static LFour& getInstance();

        void printExNum();

        void logMessage(const char* message);

    private:

        // Class operators private for Singleton Paradigm
        LFour();

        ~LFour();

        LFour(const LFour&);

        LFour& operator=(const LFour&);

        static const uint32_t exNum = 54;
};

}