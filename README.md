# SDLWRA 

Basic little abstraction I am writting for SDL, WinGDI and OpenGL so that I can just link the CPP and header and have some basic functions I generally need without wasting time constantly rewritting the same or similar stuff for window management and pixel operations.
The current speed is pretty decent and can write a for loop x,y of 680x460 screen of pixels in about 9ms or less on my very old computer

Over all goal is to make primative graphics operations simple and easy to use without having to manage window handles, textures, Device context and all that shit. I would rather tell it WINDOW main(x,y,height,width,"title");SET_ACTIVE_WINDOW(&main); then to deal with all the setup normally required/
