// mydlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��ҵ7-��ϰ3.h"
#include "mydlg.h"
#include "afxdialogex.h"


// mydlg �Ի���

IMPLEMENT_DYNAMIC(mydlg, CDialogEx)

mydlg::mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{    

}

mydlg::~mydlg()
{
}

void mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, listbox);
}


BEGIN_MESSAGE_MAP(mydlg, CDialogEx)
END_MESSAGE_MAP()


// mydlg ��Ϣ�������


BOOL mydlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	listbox.AddString(B);
	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
