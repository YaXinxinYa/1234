// juxing.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��ҵ7-2(2).h"
#include "juxing.h"
#include "afxdialogex.h"


// juxing �Ի���

IMPLEMENT_DYNAMIC(juxing, CDialogEx)

juxing::juxing(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, top(0)
	, left(0)
	, bottom(0)
	, right(0)
{

}

juxing::~juxing()
{
}

void juxing::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, top);
	DDX_Text(pDX, IDC_EDIT3, left);
	DDX_Text(pDX, IDC_EDIT2, bottom);
	DDX_Text(pDX, IDC_EDIT4, right);
}


BEGIN_MESSAGE_MAP(juxing, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &juxing::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &juxing::OnBnClickedButton1)
END_MESSAGE_MAP()


// juxing ��Ϣ�������


void juxing::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void juxing::OnBnClickedButton1()
{// TODO: �ڴ���ӿؼ�֪ͨ����������
	
}
