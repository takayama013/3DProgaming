#include "Sun.h"

void Sun::Init()
{
	m_sun.Load("Asset/Data/LessonData/Planets/sun/sun.gltf");
}

void Sun::Update()
{
	Math::Matrix rotationMat;
	rotationMat = Math::Matrix::CreateRotationY(3);
	m_mWorld = rotationMat;
}

void Sun::DrawLit()
{
	//KdShaderManager::Instance().m_StandardShader.DrawModel(m_sun);
	KdShaderManager::Instance().m_StandardShader.DrawModel(m_sun,m_mWorld);
}
