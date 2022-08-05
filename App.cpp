#include "App.hpp"
#include "myWindow.hpp"
#define WINDOWSIZEX 800
#define WINDOWSIZEY 600
#define WINDOWPOS 1500

bool App::OnInit()
{
	myWindow *window = new myWindow( "Login Required", wxPoint(WINDOWPOS, WINDOWPOS ),
									wxSize( WINDOWSIZEX, WINDOWSIZEY ) );
	window->Show( true );
	return true;
};

wxIMPLEMENT_APP(App);