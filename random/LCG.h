#pragma once

class LCG
{
public:
	LCG();
	~LCG();
	
	int random(int, int);

private:
	unsigned long long m = 0, seed = 0, a = 0, c = 0;
};
