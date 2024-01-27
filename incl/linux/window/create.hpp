#pragma once

typedef struct {
	char* windowName;
	int width;
	int height;
	bool useAudio;
	int FPS;
} window;

void makeWindow(window Window);