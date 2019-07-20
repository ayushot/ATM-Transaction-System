// TRANSACTION.cpp : implementation file
//

#include "pch.h"
#include "final.h"
#include "TRANSACTION.h"
#include "afxdialogex.h"
#include "DISPLAY.h"
#include "header.h"
#include "WITHDRAW.h"
#include "DEPOSIT.h"


// TRANSACTION dialog

IMPLEMENT_DYNAMIC(TRANSACTION, CDialogEx)

TRANSACTION::TRANSACTION(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

TRANSACTION::~TRANSACTION()
{
}

void TRANSACTION::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TRANSACTION, CDialogEx)
	
	ON_BN_CLICKED(txtAccountDetails, &TRANSACTION::OnBnClickedtxtaccountdetails)
	ON_BN_CLICKED(txtWithdrawMoney, &TRANSACTION::OnBnClickedtxtwithdrawmoney)
	ON_BN_CLICKED(btnDepositMoney, &TRANSACTION::OnBnClickedbtndepositmoney)
	ON_BN_CLICKED(btnEndTransaction, &TRANSACTION::OnBnClickedbtnendtransaction)
END_MESSAGE_MAP()


// TRANSACTION message handlers


void TRANSACTION::OnBnClickedButton3()
{
	// TODO: Add your control notification handler code here
}


void TRANSACTION::OnBnClickedtxtaccountdetails()
{ 
	DISPLAY dlg4;
	dlg4.DoModal();
	// TODO: Add your control notification handler code here
}


void TRANSACTION::OnBnClickedtxtwithdrawmoney()
{

	WITHDRAW dlg5;
	dlg5.DoModal();
	// TODO: Add your control notification handler code here
}


void TRANSACTION::OnBnClickedbtndepositmoney()
{
	DEPOSIT dlg6;
	dlg6.DoModal();
	// TODO: Add your control notification handler code here
}


void TRANSACTION::OnBnClickedbtnendtransaction()
{
	void delFound();
	MessageBeep(1);
	this->OnOK();

	// TODO: Add your control notification handler code here
}
