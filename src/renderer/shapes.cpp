#include <raylib/raylib.hpp>

struct Triangle {
	Vector2 v1;
	Vector2 v2;
	Vector2 v3;
};
struct ScreenPos {
	int x;
	int y;
};

void MakeSquare(int size, ScreenPos pos, Color color){
	DrawRectangle(pos.x, pos.y, size, size, color);
}

void MakeRectangle(int width, int height, ScreenPos pos, Color color){
	DrawRectangle(pos.x, pos.y, width, height, color);
}

void MakeTriangle(Triangle vects, Color color){
	DrawTriangle(vects.v1, vects.v2, vects.v3, color);
}

void MakeCircle(ScreenPos pos, int radius, Color color){
	DrawCircle(pos.x, pos.y, radius, color);
}

void MakeLine(ScreenPos start, ScreenPos end, Color color){
	DrawLine(start.x, start.y, end.x, end.y, color);
}

void MakeButton(ScreenPos pos, int size, Color color, char* text){
	MakeRectangle(20 * size, 10 * size, pos, color);
}