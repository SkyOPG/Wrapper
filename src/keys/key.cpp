#include <raylib/raylib.hpp>

typedef struct {
	bool KeyDown;
	bool KeyPressed;
	bool KeyUp;
} KeyInfo;

KeyInfo GetKey(KeyboardKey key){
	bool KeyDown = IsKeyDown(key);
	bool KeyPressed = IsKeyPressed(key);
	bool KeyUp = IsKeyUp(key);

	return {
		KeyDown,
		KeyPressed,
		KeyUp
	};
}