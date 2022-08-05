// i should think about just tossing this in anywhere
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

class App : public wxApp
{
public:
	virtual bool OnInit();
};
