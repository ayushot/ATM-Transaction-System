#pragma once


// INSERT dialog

class INSERT : public CDialogEx
{
	DECLARE_DYNAMIC(INSERT)

public:
	INSERT(CWnd* pParent = nullptr);   // standard constructor
	virtual ~INSERT();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
//	CString acno;
	CString aname;
	CString atype;
	CString aamt;
	CString apin;
	CString aano;
	afx_msg void OnBnClickedbtnok1();
};
