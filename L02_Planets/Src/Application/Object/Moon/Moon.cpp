#include "Moon.h"
#include"../../Object/Earth/Earth.h"

void Moon::Init()
{
	m_Moon.Load("Asset/Data/LessonData/Planets/moon/moon.gltf");
}

void Moon::Update()
{
	Math::Matrix rotaMat;
	Math::Matrix rotaMatY;
	Math::Matrix transMat;
	Math::Matrix transMat2;

	i += 0.5f;
	a +=2;

	rotaMat = Math::Matrix::CreateRotationY(DirectX::XMConvertToRadians(a));
	rotaMatY = Math::Matrix::CreateRotationY(DirectX::XMConvertToRadians(i));
	transMat = Math::Matrix::CreateTranslation(9, 0, 0);
	transMat2 = Math::Matrix::CreateTranslation(3, 0, 0);

	m_mWorld = transMat2 * rotaMat * transMat * rotaMatY;

}

void Moon::DrawLit()
{
	//KdShaderManager::Instance().m_StandardShader.DrawModel(m_Moon);
	KdShaderManager::Instance().m_StandardShader.DrawModel(m_Moon,m_mWorld);
}
