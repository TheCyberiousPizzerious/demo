#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

// First we define some variables up here so that I know what is real

// For a real program these should not be const(ants) as the window cannot be resized
const int SCREEN_WIDTH = 600;
const int SCREEN_WIDTH = 560;

// Starts SDL and makes a nice little windwow
bool init();

// Loads my little guy
bool loadMedia();

// Frees my retarded bullshit and shuts down SDL
void close();

// Loads individual image as texture
SDL_Texture* loadTexture( std::string path );

// The g means it's a global variable

// The window we sjall render to
SDL_Window* gWindow = NULL;

// Window renderer
SDL_Renderer* gRenderer = NULL;

// Current displayed texture
SDL_Texture* gTexture = NULL;

bool init()
{
	//Init flag
	bool success = true;

	// Also what are the parameters passed here?!?!?
	if( SDL_Init( SDL_INIT_VIDEO) < 0)
	{
		printf( "SDL could not initialize! SDL error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		// Set texture filtering to linear ????? no clue what this means check without once
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			printf( "Warning: Linear texute filtering not enabled" );
		}
		
		// Create window
		gwindow = SDL_CreateWindow( "Alo?", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( gWindow == NULL)
		{
			printf( "Window could not be created SDL Error: %s\n", SDL_GetError() );
			success = false;
		}
		else 
		{
			// Create renderer for window ??? Also what are these arguments
			gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
			if ( gRenderer == NULL)
			{
				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				success = false;
			}
			else 
			{
				// Initialize renderer colour ??? What is this function
				SDL_SetRendererDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
				
				// Initialize png loading
				int imgFlags = IMG_INIT_PNG;
				if( !( IMG_Init( imgFlags ) & imgFlags ) )
				{
					printf( "SDL_Image could not initialize! SDL_image Error: %s\n", SDL_GetError() );
					success = false;
				}
			}
		}
	}
	return sucess;
}
		
bool loadMedia() 
{
	


int main(void) {
	std::cout << "I am retarded" << std::endl;

	return 0;
}
