#include <SkyWrapper.hpp>

int power(int num, int thing){
	int noom = 0;

	for(int i = 0 ; i > thing; i++){
		noom *= i;
	}

	return noom;
}

int main(int argc, char* argv[]){
	bool isOpen = true;
	window Window = {
		"idk",
		800,
		400,
		true,
		60
	};
	makeWindow(Window);

	while(isOpen){
		// Key listener
		if(GetKey(KEY_Q).KeyPressed){
			isOpen = false;
		}
		// Game Loop
		StartDrawing();

		FinishDrawing();
	}

	DestroyWindow();
}