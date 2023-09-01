#include "pch.h"
#include "InvisibleBall.h"


BAKKESMOD_PLUGIN(InvisibleBall, "Invisible Ball", plugin_version, PLUGINTYPE_FREEPLAY)

std::shared_ptr<CVarManagerWrapper> _globalCvarManager;
bool hideBall;
bool enableHideBallButton;


void InvisibleBall::onLoad()
{
	_globalCvarManager = cvarManager;

	cvarManager->registerNotifier("handleEnableInvisibleBall", [this](std::vector<std::string> args) {
		gameWrapper->LogToChatbox(enableHideBallButton ? "Ativado" : "Desativado");
		handleEnableInvisibleBall(enableHideBallButton);
	}, "", PERMISSION_ALL);

	gameWrapper->HookEventWithCallerPost<CarWrapper>("Function TAGame.Ball_TA.OnCarTouch",
		[this](CarWrapper caller, void* params, std::string eventname) {
			handleInvisibleBall();
		});

	cvarManager->setBind("F4", "handleEnableInvisibleBall");

	cvarManager->log("Invisible Ball Loaded!");
	cvarManager->log("Join in a game custom game and hit F4 in keyboard to set on/off the hit ball action.");
}

void InvisibleBall::onUnload()
{
}

void InvisibleBall::handleEnableInvisibleBall(bool condition) {
	enableHideBallButton = condition;
}

void InvisibleBall::handleInvisibleBall() {
	if (!enableHideBallButton) { return; }

	ServerWrapper server = gameWrapper->GetCurrentGameState();

	if (!server) { 
		cvarManager->log("Please join in the game after.");
		return;
	}

	setHideBall(hideBall, server);
	hideBall = !hideBall;
}

void InvisibleBall::setHideBall(bool condition, ServerWrapper server) {
	BallWrapper ball = server.GetBall();
	if (!ball) { return; }
	CarWrapper car = gameWrapper->GetLocalCar();
	if (!car) { return; }

	ball.SetHidden2(condition ? 1 : 0);
	
}