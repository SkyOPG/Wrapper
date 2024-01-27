#pragma once

struct Vector2 {
    float x;                // Vector x component
    float y;                // Vector y component
};

struct Triangle {
	Vector2 v1;
	Vector2 v2;
	Vector2 v3;
};

struct ScreenPos {
	int x;
	int y;
};

struct Color {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

void StartDrawing();
void FinishDrawing();

void MakeSquare(int size, ScreenPos pos, Color color);
void MakeRectangle(int width, int height, ScreenPos pos, Color color);
void MakeTriangle(Triangle vects, Color color);
void MakeCircle(ScreenPos pos, int radius, Color color);
void MakeLine(ScreenPos start, ScreenPos end, Color color);
void MakeButton(ScreenPos pos, int size, Color color, char* text);