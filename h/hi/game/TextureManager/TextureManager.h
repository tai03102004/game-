#pragma once
#include"SDL2/SDL.h"
#include"SDL2_image/SDL_image.h"

class TextureManager
{
public:
	static SDL_Texture* Texture(const char* filelocation, SDL_Renderer* ren);
};
