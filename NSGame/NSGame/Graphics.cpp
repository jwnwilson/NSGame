#include "StdAfx.h"
#include "Graphics.h"

Graphics::Graphics(void)
{
	SCREEN_WIDTH = 800;
	SCREEN_HEIGHT = 600;
	fullscreen = FALSE;
	winHandle = NULL;
	inputPtr = NULL;
}

Graphics::~Graphics(void)
{
}
