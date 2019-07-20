#pragma once


// LOGIN dialog

class LOGIN : public CDialogEx
{
	DECLARE_DYNAMIC(LOGIN)

public:
	LOGIN(CWnd* pParent = nullptr);   // standard constructor
	virtual ~LOGIN();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtnok2();
	CString eano;
	CString epin;
};
