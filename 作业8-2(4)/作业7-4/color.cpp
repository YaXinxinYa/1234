// color.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��ҵ7-4.h"
#include "color.h"
#include "afxdialogex.h"


// color �Ի���

IMPLEMENT_DYNAMIC(color, CDialogEx)

color::color(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

color::~color()
{
}

void color::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxInt(pDX, x, 0, 255);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MinMaxInt(pDX, y, 0, 255);
	DDX_Text(pDX, IDC_EDIT4, z);
	DDV_MinMaxInt(pDX, z, 0, 255);
}


BEGIN_MESSAGE_MAP(color, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &color::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &color::OnBnClickedOk)
END_MESSAGE_MAP()


// color ��Ϣ�������


void color::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void color::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}
