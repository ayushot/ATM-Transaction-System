// LOGIN.cpp : implementation file
//

#include "pch.h"
#include "final.h"
#include "LOGIN.h"
#include "afxdialogex.h"
#include<string>
#include "Header.h"
#include "TRANSACTION.h"



// LOGIN dialog

IMPLEMENT_DYNAMIC(LOGIN, CDialogEx)

LOGIN::LOGIN(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, eano(_T(""))
	, epin(_T(""))
	
{

}

LOGIN::~LOGIN()
{
}

void LOGIN::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, txtEnterAccountNumber, eano);
	DDX_Text(pDX, txtEnterPIN, epin);
}


BEGIN_MESSAGE_MAP(LOGIN, CDialogEx)
	ON_BN_CLICKED(btnOK2, &LOGIN::OnBnClickedbtnok2)
END_MESSAGE_MAP()


// LOGIN message handlers


void LOGIN::OnBnClickedbtnok2()
{
	UpdateData(1);
	bool b;
	CString c;
	std::string s1, s2;
	GetDlgItem(txtEnterAccountNumber)->GetWindowTextW(c);
	s1 = (CW2A)c.GetString();
	GetDlgItem(txtEnterPIN)->GetWindowTextW(c);
	s2 = (CW2A)c.GetString();
	b = search(s1, s2);
	if (b)
	{
		MessageBox(L"Sucessful");
		TRANSACTION dlg3;
		dlg3.DoModal();
	}
	else
		MessageBox(L"Failed");
	// TODO: Add your control notification handler code here
}
