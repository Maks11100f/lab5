//Compiler: GCC (MinGW)

#include "compute.h"
#include "timing.h"

#include <iostream>
#include <format>

using namespace std;

int main()
{
    double t = timeit([]
                      {
                          quick("quick test");
                          slow("slow test"); });
    cout << format("{:.2f} s", t) << endl;

    return 0;
}
