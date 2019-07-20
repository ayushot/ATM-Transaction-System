#pragma once


// TRANSACTION dialog

class TRANSACTION : public CDialogEx
{
	DECLARE_DYNAMIC(TRANSACTION)

public:
	TRANSACTION(CWnd* pParent = nullptr);   // standard constructor
	virtual ~TRANSACTION();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedtxtaccountdetails();
	afx_msg void OnBnClickedtxtwithdrawmoney();
	afx_msg void OnBnClickedbtndepositmoney();
	afx_msg void OnBnClickedbtnendtransaction();
};
