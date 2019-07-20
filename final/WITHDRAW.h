#pragma once


// WITHDRAW dialog

class WITHDRAW : public CDialogEx
{
	DECLARE_DYNAMIC(WITHDRAW)

public:
	WITHDRAW(CWnd* pParent = nullptr);   // standard constructor
	virtual ~WITHDRAW();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtnok3();
};
