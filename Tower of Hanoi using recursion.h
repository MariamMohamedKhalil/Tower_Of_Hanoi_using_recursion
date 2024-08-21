#pragma once
#include <iostream> 
using namespace std;
class TOH
{
private:
	int NumberOfDisks;
	int Moves;
public:
	void set_disks(int x);
	int get_disks();
	int NumberOfMoves();
	void TowerOfHanoi(int x, char from, char to, char aux);
	int check();
	TOH();
	~TOH();
};

