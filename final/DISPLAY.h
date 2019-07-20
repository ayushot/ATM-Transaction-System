#pragma once


// DISPLAY dialog

class DISPLAY : public CDialogEx
{
	DECLARE_DYNAMIC(DISPLAY)

public:
	DISPLAY(CWnd* pParent = nullptr);   // standard constructor
	virtual ~DISPLAY();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString displayid;
	afx_msg void OnBnClickedbtnview();
};
