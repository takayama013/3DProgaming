#include "Earth.h"

void Earth::Init()
{
	m_Earth.Load("Asset/Data/LessonData/Planets/Earth/Earth.gltf");
}

void Earth::Update()
{
	Math::Matrix rotaMat;
	Math::Matrix rotaMatY;
	Math::Matrix transMat;

	i += 0.5f;
	a +=2;

	rotaMat = Math::Matrix::CreateRotationY(DirectX::XMConvertToRadians(a));
	rotaMatY = Math::Matrix::CreateRotationY(DirectX::XMConvertToRadians(i));
	transMat = Math::Matrix::CreateTranslation(9, 0, 0);

	m_mWorld = rotaMat * transMat * rotaMatY;
}

void Earth::DrawLit()
{
	//KdShaderManager::Instance().m_StandardShader.DrawModel(m_Earth);
	KdShaderManager::Instance().m_StandardShader.DrawModel(m_Earth,m_mWorld);
}
