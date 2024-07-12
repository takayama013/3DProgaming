#pragma once
class Earth : public KdGameObject
{
public:
	Earth(){}
	~Earth()override {};

	void Init()override;
	void Update()override;
	void DrawLit()override;

private:
	KdModelData m_Earth;
	int a = 0;
	float i = 0;
};