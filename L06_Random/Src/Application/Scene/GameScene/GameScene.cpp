#include "GameScene.h"
#include"../SceneManager.h"

#include "../../GameObject/Terrain/Terrain.h"
#include "../../GameObject/Character/Character.h"

#include "../../GameObject/Camera/FPSCamera/FPSCamera.h"
#include "../../GameObject/Camera/TPSCamera/TPSCamera.h"
#include "../../GameObject/Camera/CCTVCamera/CCTVCamera.h"
void GameScene::Init()
{
	//===================================================================
	// ステージ初期化
	//===================================================================
	std::shared_ptr<Terrain> _terrain = std::make_shared<Terrain>();
	_terrain->Init();
	AddObject(_terrain);

	//===================================================================
	// キャラクター初期化
	//===================================================================
	std::shared_ptr<Character> _character = std::make_shared<Character>();
	_character->Init();
	AddObject(_character);

	//===================================================================
	// カメラ初期化
	//===================================================================
//	std::shared_ptr<FPSCamera>		_camera = std::make_shared<FPSCamera>();
//	std::shared_ptr<TPSCamera>		_camera = std::make_shared<TPSCamera>();
	std::shared_ptr<CCTVCamera>		_camera = std::make_shared<CCTVCamera>();
	_camera->Init();
	_camera->SetTarget(_character);
	_camera->RegistHitObject(_terrain);
	_character->SetCamera(_camera);
	AddObject(_camera);

	//===================================================================
	// 乱数実験場
	//===================================================================

	int randRes[10] = {};
	//srand((unsigned)time(NULL));
	//for (int i=0;i<100000000;i++)
	//{
	//	// 0～32767 % 10000(0～9999)
	//	int tmp = rand() % 10000;
	//	int idx = tmp / 1000;

	//	randRes[idx]++;
	//}
	//// 結果を出力
	//OutputDebugStringA("------------------------------------------------------------\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	std::stringstream ss;
	//	ss << "取得した値が" << i * 1000 << "～" << (i + 1) * 1000 <<
	//		"の件数：\t" << randRes[i] << "\n";
	//	std::string str = ss.str();
	//	OutputDebugStringA(str.c_str());
	//}
	//OutputDebugStringA("------------------------------------------------------------\n");

	// メルセンヌツイスタ
	//for (int i=0;i<100000000;i++)
	//{
	//	// 0～32767 % 10000(0～9999)
	//	int tmp = KdGetInt(0, 9999);
	//	int idx = tmp / 1000;

	//	randRes[idx]++;
	//}
	//// 結果を出力
	//OutputDebugStringA("------------------------------------------------------------\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	std::stringstream ss;
	//	ss << "取得した値が" << i * 1000 << "～" << (i + 1) * 1000 <<
	//		"の件数：\t" << randRes[i] << "\n";
	//	std::string str = ss.str();
	//	OutputDebugStringA(str.c_str());
	//}
	//OutputDebugStringA("------------------------------------------------------------\n");

	// レッスン01 : CカードとRカードをそれぞれ50％の確率で起動時に表示
	// int tmp = KdGetInt(0, 1);
	//int tmp2 = KdGetInt(0, 1);

	//// 結果を出力

	//OutputDebugStringA("------------------------------------------------------------\n");

	//std::stringstream ss;

	//if (tmp > 0)
	//{
	//	ss << "Cカードゲット！" << "\n";
	//	std::string str = ss.str();
	//	OutputDebugStringA(str.c_str());
	//}
	//
	//if (tmp2 > 0)
	//{
	//	ss << "Rカードゲット！" << "\n";
	//	std::string str = ss.str();
	//	OutputDebugStringA(str.c_str());
	//}

	//OutputDebugStringA("------------------------------------------------------------\n");

	// レッスン02 : Cカード99.5%とRカードを0.5％の確率で起動時に表示
	int _rand = KdGetFloat(0, 100);

	// 結果を出力

	OutputDebugStringA("------------------------------------------------------------\n");

	std::stringstream ss;

	if (_rand > 0.5f)
	{
		ss << "Cカードゲット！" << "\n";
		std::string str = ss.str();
		OutputDebugStringA(str.c_str());
	}
	
	if (_rand < 0.5f)
	{
		ss << "Rカードゲット！" << "\n";
		std::string str = ss.str();
		OutputDebugStringA(str.c_str());
	}

	OutputDebugStringA("------------------------------------------------------------\n");

}

void GameScene::Event()
{
}