#pragma once
#include "../Library/gameObject.h"

class Stage : public GameObject {
public:
	Stage();
	~Stage();
	void Draw() override;
	int hImage;
	int x;
	int y;
};