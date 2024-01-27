linux:
	g++ src/**/* -o build/main -I./incl/linux -L./lib/linux -lraylib
global:
	g++ src/**/* -o build/main -I./incl/linux -L./lib/linux -lraylib
	x86_64-w64-mingw32-g++ src/**/* -o build/main.exe -I./incl/windows -L./lib/windows -lraylib -lopengl32 -lgdi32 -lwinmm
win:
	g++ src/**/* -o build/main.exe -I./incl/windows -L./lib/windows -lraylib -lopengl32 -lgdi32 -lwinmm