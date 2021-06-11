#include "Goal.h"

bool Goal::TestCollision(const Dude& dude) const 
{
	const int duderight = dude.GetX() + dude.GetWidth();
	const int dudebottom = dude.GetY() + dude.GetHeight();
	const int pooright = x + dimension;
	const int poobottom = y + dimension;

	return
		duderight >= x &&
		dude.GetX() <= pooright &&
		dudebottom >= y &&
		dude.GetY() <= poobottom;
}