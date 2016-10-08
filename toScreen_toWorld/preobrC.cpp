#pragma once
#include "stdafx.h"

int Coord(double Os, double Osp, int Scr)
{
	int C, XorY, XporYp;
	XorY = (int) Os;
	XporYp = (int) Osp;
	C = ((XporYp*Scr)/XorY);
	return C;
}