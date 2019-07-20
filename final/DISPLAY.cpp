// DISPLAY.cpp : implementation file
//

#include "pch.h"
#include "final.h"
#include "DISPLAY.h"
#include "afxdialogex.h"
#include "header.h"


// DISPLAY dialog

IMPLEMENT_DYNAMIC(DISPLAY, CDialogEx)

DISPLAY::DISPLAY(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, displayid(_T(""))
{

}

DISPLAY::~DISPLAY()
{
}

void DISPLAY::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, txtView, displayid);
}


BEGIN_MESSAGE_MAP(DISPLAY, CDialogEx)
	ON_BN_CLICKED(btnView, &DISPLAY::OnBnClickedbtnview)
END_MESSAGE_MAP()


// DISPLAY message handlers


void DISPLAY::OnBnClickedbtnview()
{
	char* results = display();
	CString c(results);
	GetDlgItem(txtView)->SetWindowTextW(c);

	/*UpdateData(TRUE);
	CString c;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(c);
	std::string result = CW2A(c);
	result = Search(result);
	c = result.c_str();
	GetDlgItem(IDC_RESULTS)->SetWindowTextW(c);*/
	// TODO: Add your control notification handler code here
}
