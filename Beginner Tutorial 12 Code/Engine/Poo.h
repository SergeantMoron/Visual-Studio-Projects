#pragma once

#include "Graphics.h"
#include "Dude.h"
#include <random>

class Poo
{
public:
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void Update();
	bool TestCollision(const Dude& dude) const;
	void Draw( Graphics& gfx ) const;
private:
	//std::random_device rd;
	//std::mt19937 rng;
	//std::uniform_int_distribution<int> xDist;
	//std::uniform_int_distribution<int> yDist;
	//std::uniform_int_distribution<int> vDist;
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 24;
	static constexpr int height = 24;
};