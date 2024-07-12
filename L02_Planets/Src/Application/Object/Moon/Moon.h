#pragma once
//class Application;
class Moon : public KdGameObject
{
public:
	Moon(){}
	~Moon()override {};

	void Init()override;
	void Update()override;
	void DrawLit()override;
	//void SetOwner(Application* _owner) { m_owner = _owner; };

private:
	//Application* m_owner = nullptr;
	KdModelData m_Moon;
	int a = 0;
	float i = 0;
};