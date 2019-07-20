// WITHDRAW.cpp : implementation file
//

#include "pch.h"
#include "final.h"
#include "WITHDRAW.h"
#include "afxdialogex.h"
#include <string>
#include "header.h"
#include "TRANSACTION.h"


// WITHDRAW dialog

IMPLEMENT_DYNAMIC(WITHDRAW, CDialogEx)

WITHDRAW::WITHDRAW(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG5, pParent)
{

}

WITHDRAW::~WITHDRAW()
{
}

void WITHDRAW::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(WITHDRAW, CDialogEx)
	ON_BN_CLICKED(btnOK3, &WITHDRAW::OnBnClickedbtnok3)
END_MESSAGE_MAP()


// WITHDRAW message handlers


void WITHDRAW::OnBnClickedbtnok3()
{
	UpdateData(TRUE);
	char newbal;
	CString c1;
	std::string s1;
	GetDlgItem(txtEnterAmount)->GetWindowTextW(c1);
	s1 = (CW2A)c1.GetString();
	withdrawMoney(s1);
	MessageBox(L"Please Take Your Money");
	MessageBeep(1);
	this->OnOK();

	
	// TODO: Add your control notification handler code here
}
