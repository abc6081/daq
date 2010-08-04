/////////////////////////////////////////////////////////////////////////////
// Name:        virtual_common_ch_control.cpp
// Purpose:     
// Author:      NDA
// Modified by: 
// Created:     11/01/2007 15:09:37
// RCS-ID:      
// Copyright:   CAEN S.p.A All rights reserved.
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 11/01/2007 15:09:37

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "virtual_common_ch_control.h"
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "virtual_common_ch_control.h"
#include "virtual_channel_def_dialog.h"

////@begin XPM images
////@end XPM images

/*!
 * VirtualCommonChControl type definition
 */

IMPLEMENT_DYNAMIC_CLASS( VirtualCommonChControl, CommonChControlBase )

/*!
 * VirtualCommonChControl event table definition
 */

BEGIN_EVENT_TABLE( VirtualCommonChControl, CommonChControlBase )

////@begin VirtualCommonChControl event table entries
    EVT_TOGGLEBUTTON( ID_VIRTUAL_ENABLE_TOGGLEBUTTON, VirtualCommonChControl::OnVirtualEnableTogglebuttonClick )

    EVT_BUTTON( ID_VIRTUAL_BUTTON, VirtualCommonChControl::OnVirtualButtonClick )

////@end VirtualCommonChControl event table entries

END_EVENT_TABLE()

/*!
 * VirtualCommonChControl constructors
 */

VirtualCommonChControl::VirtualCommonChControl( )
{
}

VirtualCommonChControl::VirtualCommonChControl( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, pos, size, style);
}

/*!
 * VirtualCommonChControl creator
 */

bool VirtualCommonChControl::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin VirtualCommonChControl member initialisation
    m_main_sizer_text = NULL;
    m_ch_enable_control = NULL;
    m_medium_value_control = NULL;
////@end VirtualCommonChControl member initialisation

////@begin VirtualCommonChControl creation
    CommonChControlBase::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end VirtualCommonChControl creation
    return true;
}

/*!
 * Control creation for VirtualCommonChControl
 */

void VirtualCommonChControl::CreateControls()
{    
////@begin VirtualCommonChControl content construction
    // Generated by DialogBlocks, 16/01/2007 15:53:32 (unregistered)

    VirtualCommonChControl* itemCommonChControlBase1 = this;

    this->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxNORMAL, false, _T("Verdana")));
    m_main_sizer_text = new wxStaticBox(itemCommonChControlBase1, wxID_ANY, _("???"));
    wxStaticBoxSizer* itemStaticBoxSizer2 = new wxStaticBoxSizer(m_main_sizer_text, wxVERTICAL);
    itemCommonChControlBase1->SetSizer(itemStaticBoxSizer2);

    m_ch_enable_control = new wxToggleButton( itemCommonChControlBase1, ID_VIRTUAL_ENABLE_TOGGLEBUTTON, _("???"), wxDefaultPosition, wxSize(65, -1), 0 );
    m_ch_enable_control->SetValue(true);
    m_ch_enable_control->SetHelpText(_("Enable/Disable channel"));
    if (ShowToolTips())
        m_ch_enable_control->SetToolTip(_("Enable/Disable channel"));
    m_ch_enable_control->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxBOLD, false, _T("Verdana")));
    itemStaticBoxSizer2->Add(m_ch_enable_control, 0, wxALIGN_CENTER_HORIZONTAL, 0);

    itemStaticBoxSizer2->Add(5, 10, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 1);

    wxButton* itemButton5 = new wxButton( itemCommonChControlBase1, ID_VIRTUAL_BUTTON, _("Define"), wxDefaultPosition, wxSize(65, 25), 0 );
    itemButton5->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxBOLD, false, _T("Verdana")));
    itemStaticBoxSizer2->Add(itemButton5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2);

    itemStaticBoxSizer2->Add(5, 6, 0, wxALIGN_CENTER_HORIZONTAL, 0);

    m_medium_value_control = new wxStaticText( itemCommonChControlBase1, wxID_STATIC, _("0"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
    m_medium_value_control->SetHelpText(_("The samples' medium value"));
    if (ShowToolTips())
        m_medium_value_control->SetToolTip(_("The samples' medium value"));
    itemStaticBoxSizer2->Add(m_medium_value_control, 0, wxGROW|wxALL|wxADJUST_MINSIZE, 6);

////@end VirtualCommonChControl content construction
}

/*!
 * wxEVT_COMMAND_CHECKBOX_CLICKED event handler for ID_VIRTUAL_ENABLE_TOGGLEBUTTON
 */

void VirtualCommonChControl::OnVirtualEnableTogglebuttonClick( wxCommandEvent& /*event */)
{
	this->m_p_board_channel->m_enabled= this->m_ch_enable_control->GetValue( )!= 0;
	this->m_ch_enable_control->SetLabel( this->m_ch_enable_control->GetValue( )? _("Disable"): _("Enable"));
	for( int i= 0; i< SCOPE_NUM_PANELS; i++)
	{
		(this->m_p_board_channel->ScopeRefresh)( i, true);
	}
}

/*!
 * Should we show tooltips?
 */

bool VirtualCommonChControl::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap VirtualCommonChControl::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin VirtualCommonChControl bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end VirtualCommonChControl bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon VirtualCommonChControl::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin VirtualCommonChControl icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end VirtualCommonChControl icon retrieval
}
/*!
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_VIRTUAL_BUTTON
 */

void VirtualCommonChControl::OnVirtualButtonClick( wxCommandEvent& /*event*/ )
{
	VirtualChannelDefDialog dlg( this->m_p_board_channel, this);
	if( dlg.ShowModal()== wxOK)
	{
		for( int i= 0; i< SCOPE_NUM_PANELS; i++)
		{
			(this->m_p_board_channel->ScopeRefresh)( i, false);
		}
	}
}


bool VirtualCommonChControl::SetupBoard( GenericBoard* p_board, int ch_index, int ch_count)
{
	this->m_p_board= p_board;
	this->m_ch_index= ch_index;
	this->m_ch_count= ch_count;
	if( ( size_t)this->m_ch_index>= this->m_p_board->m_virtual_channel_array.GetCount())
		return false;
	this->m_p_board_channel= (VirtualBoardChannel*)this->m_p_board->m_virtual_channel_array[ this->m_ch_index];
	this->m_p_board_channel->m_p_common_ch_control= this;

	if( !this->UpdateControls())
		return false;
	return true;
}
bool VirtualCommonChControl::UpdateControls( )
{
	this->m_main_sizer_text->SetLabel( wxString::Format( "VIRT %d", this->m_ch_count));
	this->m_ch_enable_control->SetValue( this->m_p_board_channel->m_enabled);
	this->m_ch_enable_control->SetLabel( this->m_ch_enable_control->GetValue( )? _("Disable"): _("Enable"));

	return true;
}
void VirtualCommonChControl::SetMediumLabel( double value)
{
	this->m_medium_value_control->SetLabel( wxString::Format( "%.3f", value));
}
void VirtualCommonChControl::SetOverloadBackground( const wxColor& /*color*/)
{
	//this->m_overload_control->SetBackgroundColour( color);
	//this->m_overload_control->Refresh();
}