#pragma once
#include "IShape.h"

class RectAngle : public IShape
{
public:
	void size() override;

	void draw() override;

public:
	float width = 0;

	float height = 0;

	float total;
};