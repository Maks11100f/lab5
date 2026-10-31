//Compiler: GCC (MinGW)

#include "work.h"

#include <cstdlib>
#include <iterator>

using namespace std;

using Work = void();

Work *works[] = {sequential::work, parallel::work};
int nWorks = size(works);

int main(int argc, char *argv[])
{
    int task = nWorks - 1;
    if (argc > 1)
    {
        int tmp = atoi(argv[1]);
        if (tmp >= 0 && tmp < nWorks)
            task = tmp;
    }
    works[task]();

    return 0;
}
