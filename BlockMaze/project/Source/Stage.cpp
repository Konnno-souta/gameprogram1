#include "Stage.h"
const int WIDTH = 8;
const int HEIGHT = 12;
int map[WIDTH][HEIGHT] = {
	{1,1,1,1,1,1,1,1,1,1,1,1},
	{1,1,0,1,0,1,0,1,0.0,1.1},
	{1,0,1,1,1,1,1,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,0,0,0,1},
	{1,0,1,1,1,1,1,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,0,0,0,1},
	{1,0,1,1,1,1,1,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1},
};

Stage::Stage()
{
	hImage = LoadGraph("data/image/parts.png");
}

Stage::~Stage()
{
}

void Stage::Draw()
{

	for (int j = 0; j < 8; j++) {
		int y = j * 40 + 100;
		for (int i = 0; i < 12; i++) {
			int x = i * 40 + 100;
			if (map[j][i] == 1) {
					DrawRectGraph(x, y, 0, 40, 40, 40, hImage, TRUE);
			}
		}
	}
};
