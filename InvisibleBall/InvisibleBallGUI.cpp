#include "pch.h"
#include "InvisibleBall.h"

/* Plugin Settings Window code here
std::string InvisibleBall::GetPluginName() {
	return "InvisibleBall";
}

void InvisibleBall::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> InvisibleBall
void InvisibleBall::RenderSettings() {
	ImGui::TextUnformatted("InvisibleBall plugin settings");
}
*/

/*
// Do ImGui rendering here
void InvisibleBall::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string InvisibleBall::GetMenuName()
{
	return "invisibleball";
}

// Title to give the menu
std::string InvisibleBall::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void InvisibleBall::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool InvisibleBall::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool InvisibleBall::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void InvisibleBall::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void InvisibleBall::OnClose()
{
	isWindowOpen_ = false;
}
*/
