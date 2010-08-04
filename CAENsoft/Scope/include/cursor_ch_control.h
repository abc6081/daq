/////////////////////////////////////////////////////////////////////////////
// Name:        cursor_ch_control.h
// Purpose:     
// Author:      NDA
// Modified by: 
// Created:     12/10/2006 10:56:03
// RCS-ID:      
// Copyright:   CAEN S.p.A All rights reserved.
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 12/10/2006 10:56:03

#ifndef _CURSOR_CH_CONTROL_H_
#define _CURSOR_CH_CONTROL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "cursor_ch_control.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/tglbtn.h"
#include "wx/spinbutt.h"
////@end includes

#include "generic_board.h"
/*!
 * Forward declarations
 */

////@begin forward declarations
class wxToggleButton;
class wxSpinButton;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_CURSORCHCONTROL 10044
#define SYMBOL_CURSORCHCONTROL_STYLE 0
#define SYMBOL_CURSORCHCONTROL_TITLE _("CursorChControl")
#define SYMBOL_CURSORCHCONTROL_IDNAME ID_CURSORCHCONTROL
#define SYMBOL_CURSORCHCONTROL_SIZE wxSize(400, 300)
#define SYMBOL_CURSORCHCONTROL_POSITION wxDefaultPosition
#define ID_CURSOR_TOGGLEBUTTON 10001
#define ID_CURSOR_RESET_BUTTON 10004
#define ID_CURSOR_POSITION_SPINBUTTON 10005
#define ID_CURSOR_POS_MULTIPLIER_CHOICE 10045
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * CursorChControl class declaration
 */

class CursorChControl: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( CursorChControl )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    CursorChControl( );
    CursorChControl( wxWindow* parent, wxWindowID id = SYMBOL_CURSORCHCONTROL_IDNAME, const wxPoint& pos = SYMBOL_CURSORCHCONTROL_POSITION, const wxSize& size = SYMBOL_CURSORCHCONTROL_SIZE, long style = SYMBOL_CURSORCHCONTROL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CURSORCHCONTROL_IDNAME, const wxPoint& pos = SYMBOL_CURSORCHCONTROL_POSITION, const wxSize& size = SYMBOL_CURSORCHCONTROL_SIZE, long style = SYMBOL_CURSORCHCONTROL_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin CursorChControl event handler declarations

    /// wxEVT_COMMAND_CHECKBOX_CLICKED event handler for ID_CURSOR_TOGGLEBUTTON
    void OnCursorTogglebuttonClick( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_CURSOR_RESET_BUTTON
    void OnCursorResetButtonClick( wxCommandEvent& event );

    /// wxEVT_COMMAND_SPINCTRL_UPDATED event handler for ID_CURSOR_POSITION_SPINBUTTON
    void OnCursorPositionSpinbuttonUpdated( wxSpinEvent& event );

    /// wxEVT_COMMAND_CHOICE_SELECTED event handler for ID_CURSOR_POS_MULTIPLIER_CHOICE
    void OnCursorPosMultiplierChoiceSelected( wxCommandEvent& event );

////@end CursorChControl event handler declarations

////@begin CursorChControl member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end CursorChControl member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin CursorChControl member variables
    wxStaticBox* m_main_sizer_text;
    wxToggleButton* m_ch_enable_control;
    wxButton* m_ch_cursor_reset_control;
    wxSpinButton* m_set_cursor_position_control;
    wxChoice* m_cursor_pos_multiplier_control;
    wxStaticText* m_cursor_position_control;
    wxStaticText* m_cursor_value_control;
    wxStaticText* m_mV_label;
////@end CursorChControl member variables
	bool SetupBoard( GenericBoard* p_board, int ch_index, int ch_count, int m_scope_index, bool is_virtual);
	bool UpdateControls( void);
	bool UpdateCursorPosition( int cursor_position);
	void SetEnable( bool enable);
private: 
	int GetCursorMultipler( void);
	// Generic Board pointer
	GenericBoard* m_p_board;
	GenericBoardChannel* m_p_board_channel;
	int m_ch_index;
	int m_ch_count;
	int m_scope_index;
	int m_last_cursor_pos;
	bool m_is_virtual;
};

#endif
    // _CURSOR_CH_CONTROL_H_
