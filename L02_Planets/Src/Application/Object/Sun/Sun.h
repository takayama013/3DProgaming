﻿#pragma once
class Sun : public KdGameObject
{
public:
	Sun(){}
	~Sun()override {};

	void Init()override;
	void Update()override;
	void DrawLit()override;

private:
	KdModelData m_sun;
};