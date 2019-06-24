#include "pch.h"
#include "Move.h"
#include<iostream>

Move::Move(double a, double b)
{
	x = a;
	y = b;

}
Move::~Move()
{
}

void Move::showMove()const
{
	using namespace std;
	cout << "x:" << x << "  y:" << y << endl;

}

Move Move::add(const Move & m)
{
	x += m.x;
	y += m.y;
	return *this;
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
 }
