#pragma once

#include "bakkesmod/plugin/bakkesmodplugin.h"
#include "bakkesmod/plugin/pluginwindow.h"
#include "bakkesmod/plugin/PluginSettingsWindow.h"

#include "version.h"
constexpr auto plugin_version = stringify(VERSION_MAJOR) "." stringify(VERSION_MINOR) "." stringify(VERSION_PATCH);


class InvisibleBall: public BakkesMod::Plugin::BakkesModPlugin
{


	struct Color
	{
		unsigned char R;
		unsigned char G;
		unsigned char B;
	};

	struct Popup
	{
		std::string text = "";
		Color color = { 255, 255, 255 };
		Vector2 startLocation = { -1, -1 };
	};
	
	private:
		bool hideBall = false;
		bool enableHideBallButton = false;

	public:
		virtual void onLoad();
		virtual void onUnload();
		void handleInvisibleBall();
		void handleEnableInvisibleBall(bool condition);
		void setHideBall(bool condition, ServerWrapper server);

};

