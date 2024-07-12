#pragma once

class Terrain : public KdGameObject
{
public:
	Terrain();
	~Terrain()override;


public:
	void Init()override;
	void Update()override;
	void DrawLit()override;

private:
	//地形モデル
	std::shared_ptr<KdModelData> m_spModel = nullptr;
};
