#include "LCG.h"
#include <ctime>
#include <cstdint>

LCG::LCG()
{
    this->seed = static_cast<uint32_t>(time(0));
    this->a = 1664525;
    this->c = 1013904223;
    this->m = 4294967296;
}


LCG::~LCG()
{
}

int LCG::random(int min, int max)
{
    unsigned long long result = (this->a * this->seed + this->c) % this->m;

    this->seed = result;
    return min + (this->seed % (max - min + 1));
}
