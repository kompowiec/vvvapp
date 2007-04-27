/*
	This file is part of VVV (Virtual Volumes View)

	Copyright (C) 2007, the VVV Development team

	Author: Fulvio Senore

    VVV is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    VVV is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with VVV; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

/////////////////////////////////////////////////////////////////////////////
// Name:        choose_virtual_folder.h
// Purpose:     
// Author:      
// Modified by: 
// Created:     16/04/2007 12:35:50
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 16/04/2007 12:35:50

#ifndef _CHOOSE_VIRTUAL_FOLDER_H_
#define _CHOOSE_VIRTUAL_FOLDER_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "choose_virtual_folder.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/treectrl.h"
////@end includes
#include "wx/imaglist.h"

/*!
 * Forward declarations
 */

////@begin forward declarations
class wxTreeCtrl;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_DIALOG_CHOOSE_VIRTUAL_FOLDER 10016
#define ID_TREECTRL_CHOOSE 10017
#define SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_TITLE _("Choose virtual folder")
#define SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_IDNAME ID_DIALOG_CHOOSE_VIRTUAL_FOLDER
#define SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_SIZE wxSize(400, 500)
#define SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * CDialogChooseVirtualFolder class declaration
 */

class CDialogChooseVirtualFolder: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( CDialogChooseVirtualFolder )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    CDialogChooseVirtualFolder( );
    CDialogChooseVirtualFolder( wxWindow* parent, wxWindowID id = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_IDNAME, const wxString& caption = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_TITLE, const wxPoint& pos = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_POSITION, const wxSize& size = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_SIZE, long style = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_IDNAME, const wxString& caption = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_TITLE, const wxPoint& pos = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_POSITION, const wxSize& size = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_SIZE, long style = SYMBOL_CDIALOGCHOOSEVIRTUALFOLDER_STYLE );

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin CDialogChooseVirtualFolder event handler declarations

    /// wxEVT_COMMAND_TREE_SEL_CHANGED event handler for ID_TREECTRL_CHOOSE
    void OnTreectrlChooseSelChanged( wxTreeEvent& event );

    /// wxEVT_COMMAND_TREE_ITEM_EXPANDING event handler for ID_TREECTRL_CHOOSE
    void OnTreectrlChooseItemExpanding( wxTreeEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_OK
    void OnOKClick( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_CANCEL
    void OnCANCELClick( wxCommandEvent& event );

////@end CDialogChooseVirtualFolder event handler declarations

////@begin CDialogChooseVirtualFolder member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end CDialogChooseVirtualFolder member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin CDialogChooseVirtualFolder member variables
    wxTreeCtrl* m_TreeCtrl;
////@end CDialogChooseVirtualFolder member variables

	long GetVirtualFolderID() { return m_VirtualFolderID; }

	// reloads the tree from the database
	void Refresh() { LoadVirtualTreeControl(); }

private:

	void LoadVirtualTreeControl(void);
	void LoadVirtualFolderInTreeControl( wxTreeCtrl* tctl, wxTreeItemId fatherTreeID, long fatherID);

	long m_VirtualFolderID;		// primary key of the choosen virtual foder
};

#endif
    // _CHOOSE_VIRTUAL_FOLDER_H_
