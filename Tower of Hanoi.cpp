#include "TOH.h"
#include <iostream> 
#include <math.h> 
using namespace std;
TOH::TOH() {}
TOH :: ~TOH() {}
void TOH::set_disks(int x)
{
	NumberOfDisks = x;
}
int TOH::get_disks()
{
	return NumberOfDisks;
}
int TOH::NumberOfMoves()
{
	if (check() == 0 || check() == 1)
	{
		return 0;
	}
	else
	{
		Moves = (pow(2, get_disks()) - 1);
		return Moves;
	}
}
int TOH::check()
{
	if (get_disks() == 0)
	{
		return 0;
	}
	else if (get_disks() < 0)
	{
		return 1;
	}
}
void TOH::TowerOfHanoi(int x, char from, char to, char aux)
{
	if (x == 0)
	{
		return;
	}
	TowerOfHanoi(x - 1, from, aux, to);
	cout << "Move disk " << x << " from rod " << from << " to rod " <<
		to << endl;
	TowerOfHanoi(x - 1, aux, to, from);
}