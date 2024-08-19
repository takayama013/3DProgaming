#pragma once

class Terrain : public KdGameObject
{
public:
	Terrain() {}
	virtual ~Terrain()		override {}

	void Init()				override;
	void Update()			override;
	void DrawLit()			override;

protected:

	std::shared_ptr<KdModelWork> m_spModel = nullptr;

};