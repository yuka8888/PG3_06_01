#include "InputHandler.h"

ICommand* InputHandler::HandleInput()
{
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}
	else if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_;
	}
	return nullptr;
}

void InputHandler::AssignMoveLeftCommand2PressKeyA()
{
	ICommand* command = new MoveLeftCommand();
	pressKeyA_ = command;
}

void InputHandler::AssignMoveRightCommand2PressKeyD()
{
	ICommand* command = new MoveRightCommand();
	pressKeyD_ = command;

}
