#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif


class myWindow: public wxFrame
{
public:
	myWindow(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
	wxTextCtrl* password = nullptr;
	void OnExit(wxCommandEvent& event);
	void login( wxCommandEvent& event);
};
