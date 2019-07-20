#pragma once


// DEPOSIT dialog

class DEPOSIT : public CDialogEx
{
	DECLARE_DYNAMIC(DEPOSIT)

public:
	DEPOSIT(CWnd* pParent = nullptr);   // standard constructor
	virtual ~DEPOSIT();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtnok4();
};
