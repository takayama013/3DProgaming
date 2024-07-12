#pragma once
class Scene
{
public:
	Scene() { Init(); }
	~Scene() {};

	void Init();
	void DrawLit();
	void Update();

private:
	// カメラ
	std::unique_ptr<KdCamera>m_camera = nullptr;


//public:
//	Scene& Instance()
//	{
//		static Scene instance;
//		return instance;
//	}
};
