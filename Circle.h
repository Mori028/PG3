#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	void size() override;

	void draw() override;

public:
	float radius = 0;

	float pi = 0;

	float total;
};