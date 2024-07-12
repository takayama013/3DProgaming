﻿#pragma once

class Hamu : public KdGameObject
{
public:
	Hamu();
	~Hamu()override;


public:
	void Init()override;
	void Update()override;
	void DrawLit()override;

private:
	std::shared_ptr<KdSquarePolygon> m_spPoly = nullptr;
};
