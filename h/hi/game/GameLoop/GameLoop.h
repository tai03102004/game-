#pragma once
#include"SDL2/SDL.h"
#include"SDL2_image/SDL_image.h"
#include<iostream>
#include"Player.h"
#include"Background.h"

class GameLoop
{
private:
	Player p;
	Background b;
	Background ground1,ground2;
	const int HEIGHT = 900;
	const int WIDTH = 1350;
	bool GameState;
	SDL_Window* window;
	SDL_Event event1;
	SDL_Renderer* renderer;
public:
	GameLoop();
	bool getGameState();
	void Update();     // nâng cấp
	void Intialize();  // khởi tạo
	void Event();    // sự kiện
	void Render();   // kết xuất
	void Clear();  // thu dọn bộ nhớ
};
