// DEPOSIT.cpp : implementation file
//

#include "pch.h"
#include "final.h"
#include "DEPOSIT.h"
#include "afxdialogex.h"
#include <string>
#include "header.h"
#include "TRANSACTION.h"



// DEPOSIT dialog

IMPLEMENT_DYNAMIC(DEPOSIT, CDialogEx)

DEPOSIT::DEPOSIT(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG6, pParent)
{

}

DEPOSIT::~DEPOSIT()
{
}

void DEPOSIT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DEPOSIT, CDialogEx)
	ON_BN_CLICKED(btnOK4, &DEPOSIT::OnBnClickedbtnok4)
END_MESSAGE_MAP()


// DEPOSIT message handlers


void DEPOSIT::OnBnClickedbtnok4()
{
	UpdateData(TRUE);
	char newbal;
	CString c1;
	std::string s1;
	GetDlgItem(txtEnterAmountt)->GetWindowTextW(c1);
	s1 = (CW2A)c1.GetString();
	depositMoney(s1);
	MessageBox(L"Thankyou");
	MessageBeep(1);
	this->OnOK();
	// TODO: Add your control notification handler code here
}





















