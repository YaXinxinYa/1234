// link.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��ҵ6-4.h"
#include "link.h"
#include "afxdialogex.h"


// link �Ի���

IMPLEMENT_DYNAMIC(link, CDialogEx)

link::link(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, X(_T(""))
	, Y(0)
	, R(_T(""))
{

}

link::~link()
{
}

void link::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, X);
	DDV_MaxChars(pDX, X, 10000);
	DDX_Text(pDX, IDC_EDIT3, Y);
	DDV_MinMaxInt(pDX, Y, -10000, 10000);
	DDX_Text(pDX, IDC_EDIT1, R);
	DDV_MaxChars(pDX, R, 20000);
}


BEGIN_MESSAGE_MAP(link, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &link::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &link::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &link::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &link::OnBnClickedButton1)
END_MESSAGE_MAP()


// link ��Ϣ�������


void link::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void link::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void link::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void link::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CString A;
	A.Format(_T("%d"), Y);

	R = X + A;
	UpdateData(false);


}
