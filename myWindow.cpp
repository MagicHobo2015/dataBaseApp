#include <wx/wxprec.h>
#include "myWindow.hpp"

// this is here because its in the hello world so im gonna keep it even though i suspect i dont need all this
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif


myWindow::myWindow(const wxString& title, const wxPoint& pos, const wxSize& size):
				wxFrame(nullptr, wxID_ANY, title, pos, size)
{
	wxGridSizer* holder = nullptr;
	holder = new wxGridSizer( 2, wxSize( 10, 10 ) );

	wxStaticText* uLabel = nullptr;
	uLabel = new wxStaticText(this, wxID_ANY, wxString( "Username" ) );
	holder->Add( uLabel );

	wxTextCtrl* username = nullptr;
	username = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition,
								wxDefaultSize, 0L, wxDefaultValidator, wxString( "username" ) );
	holder->Add( username, wxEXPAND );

	wxStaticText* pLabel = nullptr;
	pLabel = new wxStaticText(this, wxID_ANY, wxString( "PassWord" ) );
	holder->Add( pLabel );
	wxButton* okButton = nullptr;
	wxButton* cancelButton = nullptr;
	okButton = new wxButton(this, wxID_OK, wxString( "Ok" ), wxDefaultPosition, wxDefaultSize, 0L, wxDefaultValidator, wxString( "okB") );
	cancelButton = new wxButton(this, wxID_ANY, wxString( "Cancel" ), wxDefaultPosition, wxDefaultSize, 0L, wxDefaultValidator, wxString( "cancelButton") );

	this->password = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition,
								wxDefaultSize, wxTE_PASSWORD, wxDefaultValidator, wxString( "password" ) );
	holder->Add( password, wxEXPAND, 10 );
	holder->Add( okButton, wxEXPAND, 10 );
	holder->Add( cancelButton, wxEXPAND, 10 );

	okButton->Bind( wxEVT_BUTTON, &myWindow::login, this );

	
	this->SetSizerAndFit( holder );

}

void myWindow::login( wxCommandEvent& event )
{
	wxString passwd;
	passwd = this->password->GetLineText(0);

	std::cout << " clicked " << passwd << std::endl;

}