// add.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��ҵ6-2.h"
#include "add.h"
#include "afxdialogex.h"


// add �Ի���

IMPLEMENT_DYNAMIC(add, CDialogEx)

add::add(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, r(0)
{

}

add::~add()
{
}

void add::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxInt(pDX, x, -10000, 10000);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MinMaxInt(pDX, y, -10000, 10000);
	DDX_Text(pDX, IDC_EDIT3, r);
	DDV_MinMaxInt(pDX, r, -20000, 20000);
}


BEGIN_MESSAGE_MAP(add, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &add::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, &add::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &add::OnBnClickedButton1)
END_MESSAGE_MAP()


// add ��Ϣ�������


void add::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void add::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	r = x + y;
	UpdateData(false);
}
