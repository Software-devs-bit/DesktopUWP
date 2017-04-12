//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************
// AClikDoc.h : interface of the CAutoClickDoc class
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.
/////////////////////////////////////////////////////////////////////////////

class CAutoClickDoc : public CDocument
{
protected: // create from serialization only
	CAutoClickDoc();
	DECLARE_DYNCREATE(CAutoClickDoc)

// Attributes
public:
	CPoint m_pt;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAutoClickDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAutoClickDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAutoClickDoc)
	afx_msg void OnEditChangetext();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	// Generated OLE dispatch map functions
public:
	//{{AFX_DISPATCH(CAutoClickDoc)
	CString m_str;
	afx_msg short GetX();
	afx_msg void SetX(short nNewValue);
	afx_msg short GetY();
	afx_msg void SetY(short nNewValue);
	afx_msg LPDISPATCH GetPosition();
	afx_msg void SetPosition(LPDISPATCH newValue);
	afx_msg void Refresh();
	afx_msg void SetAllProps(short x, short y, LPCTSTR text);
	afx_msg void ShowWindow();
	afx_msg void TestErrorHandler(short wCode);
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()

	// DUAL_SUPPORT_START
	//    add declaration of IDualAClick implementation
	//    You need one entry here for each entry in the
	//    interface statement of the ODL, plus the entries for a
	//    dispatch interface. The BEGIN_DUAL_INTERFACE_PART
	//    macro in mfcdual.h automatically generates the IDispatch
	//    entries for you.
	//    Each entry with the "propput" attribute needs a function
	//    named "put_<property name>". Each entry with the "propget"
	//    attribute needs a function named "get_<property name>".
	//    You can pull these function prototypes from the header file
	//    generated by MKTYPLIB.
	BEGIN_DUAL_INTERFACE_PART(DualAClick, IDualAClick)
		STDMETHOD(put_text)(THIS_ BSTR newText);
		STDMETHOD(get_text)(THIS_ BSTR FAR* retval);
		STDMETHOD(put_x)(THIS_ short newX);
		STDMETHOD(get_x)(THIS_ short FAR* retval);
		STDMETHOD(put_y)(THIS_ short newY);
		STDMETHOD(get_y)(THIS_ short FAR* retval);
		STDMETHOD(put_Position)(THIS_ IDualAutoClickPoint FAR* newPosition);
		STDMETHOD(get_Position)(THIS_ IDualAutoClickPoint FAR* FAR* retval);
		STDMETHOD(putref_Position)(THIS_ IDualAutoClickPoint FAR* newPosition);
		STDMETHOD(RefreshWindow)(THIS);
		STDMETHOD(SetAllProps)(THIS_ short x, short y, BSTR text);
		STDMETHOD(ShowWindow)(THIS);
		STDMETHOD(TestError)(THIS_ short wCode);
	END_DUAL_INTERFACE_PART(DualAClick)

	//     add declaration of ISupportErrorInfo implementation
	//     to indicate we support the OLE Automation error object
	DECLARE_DUAL_ERRORINFO()
	// DUAL_SUPPORT_END
};

/////////////////////////////////////////////////////////////////////////////
