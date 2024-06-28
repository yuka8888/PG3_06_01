#pragma once
#include "InputHandler.h"
#include "ICommand.h"
#include "Player.h"

class StageScene
{
public:
	StageScene();

	void Init();
	void Update();
	void Draw();

private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
};

