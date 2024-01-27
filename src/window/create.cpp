#include <raylib/raylib.h>

typedef struct {
	char* windowName;
	int width;
	int height;
	bool useAudio;
	int FPS;
} window;

void makeWindow(window Window){
	InitWindow(Window.width, Window.height, Window.windowName);
	if(Window.useAudio)
		InitAudioDevice();
	SetTargetFPS(Window.FPS);
	SetExitKey(KEY_NULL);
}