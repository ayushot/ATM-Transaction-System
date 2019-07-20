// INSERT.cpp : implementation file
//

#include "pch.h"
#include "final.h"
#include "INSERT.h"
#include "afxdialogex.h"
#include<string>
#include<fstream>
#include "Header.h"


// INSERT dialog

IMPLEMENT_DYNAMIC(INSERT, CDialogEx)

INSERT::INSERT(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, aname(_T(""))
	, aano(_T(""))
	, atype(_T(""))
	, aamt(_T(""))
	, apin(_T(""))
{

}

INSERT::~INSERT()
{
}

void INSERT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, txtAccountHolderName, acno);
	DDX_Text(pDX, txtAccountHolderName, aname);
	DDX_Text(pDX, txtAccountType, atype);
	DDX_Text(pDX, txtPIN, apin);
	DDX_Text(pDX, txtAmount, aamt);
	DDX_Text(pDX, txtAccountNumber, aano);
}


BEGIN_MESSAGE_MAP(INSERT, CDialogEx)
	ON_BN_CLICKED(btnOK1, &INSERT::OnBnClickedbtnok1)
END_MESSAGE_MAP()


// INSERT message handlers


void INSERT::OnBnClickedbtnok1()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	std::string values[5];
	values[0] = (CT2CA)aano;
	values[1] = (CT2CA)aname;
	values[2] = (CT2CA)atype;
	values[3] = (CT2CA)apin;
	values[4] = (CT2CA)aamt;
	addAccount(values);
	MessageBeep(1);
	this->OnOK();
}
