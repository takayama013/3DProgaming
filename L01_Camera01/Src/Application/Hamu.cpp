#include"Hamu.h"

Hamu::Hamu()
{
}

Hamu::~Hamu()
{
}

void Hamu::Init()
{
	m_spPoly = std::make_shared<KdSquarePolygon>();
	m_spPoly->SetMaterial("Asset/Data/LessonData/Character/hamu.png");
	// 足元を原点にする
	m_spPoly->SetPivot(KdSquarePolygon::PivotType::Center_Bottom);
}

void Hamu::Update()
{
	// ハム太郎の更新
	{
		// ベクトル
		// キャラクターの移動速度(まねしない)
		float moveSpd = 0.05f;
		Math::Vector3 now_Pos = m_mWorld.Translation();

		// 移動したい方向ベクトル = 絶対に長さが「1」でなければならない！
		Math::Vector3 moveVec = Math::Vector3::Zero;

		if (GetAsyncKeyState('W')) { moveVec.z = 1.0f; }
		if (GetAsyncKeyState('S')) { moveVec.z = -1.0f; }
		if (GetAsyncKeyState('D')) { moveVec.x = 1.0f; }
		if (GetAsyncKeyState('A')) { moveVec.x = -1.0f; }

		// 正規化
		moveVec.Normalize();
		moveVec *= moveSpd;
		now_Pos += moveVec;

		// キャラクターのワールド行列を作る
		m_mWorld = Math::Matrix::CreateTranslation(now_Pos);
	}
}

void Hamu::DrawLit()
{
	KdShaderManager::Instance().m_StandardShader.DrawPolygon(*m_spPoly, m_mWorld);
}
