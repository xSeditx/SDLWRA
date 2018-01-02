//BASIC USAGE.
//DEPENDS ON SDL2.Lib, SDL2MAIN.Lib  
//SDL.DLL needs to be in the folder with the EXE. 
// Very basic and bare bones, Future versions will come soon as I develop more. 
// Compatability with WinGDI and OpenGL are getting added so that #define _(Library being used)_ can be set at the top.

void main()
{
	WINDOW main(0,0,SCREENWIDTH,SCREENHEIGHT,"NEW WINDOW");
	SET_ACTIVE_WINDOW(&main);
	while(_LOOP_GAME){
		_CLS;
//// DO STUFF HERE
		_SYNC;
	}
	return;
}
