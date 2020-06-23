// Calculator.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��ҵ7-1.h"
#include "Calculator.h"
#include "afxdialogex.h"


// Calculator �Ի���

IMPLEMENT_DYNAMIC(Calculator, CDialogEx)

Calculator::Calculator(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, sum(0)
	, r(0)
{

}

Calculator::~Calculator()
{

}

void Calculator::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxInt(pDX, x, -500, 500);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MinMaxInt(pDX, y, -500, 500);
	DDX_Text(pDX, IDC_EDIT3, sum);
	DDV_MinMaxDouble(pDX, sum, -250000, 250000);
	DDX_Text(pDX, IDC_EDIT4, r);
	DDV_MinMaxDouble(pDX, r, 0, 500);
}


BEGIN_MESSAGE_MAP(Calculator, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &Calculator::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &Calculator::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON5, &Calculator::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON3, &Calculator::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &Calculator::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &Calculator::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &Calculator::OnBnClickedButton6)
END_MESSAGE_MAP()


// Calculator ��Ϣ�������


void Calculator::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Calculator::OnBnClickedButton1()
{
	this->UpdateData(true);
	 sum = x + y;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Calculator::OnBnClickedButton7()
{  
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Calculator::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	sum = 1/ r;
	UpdateData(false);
}


void Calculator::OnBnClickedButton3()
{
	this->UpdateData(true);
	sum = y * x;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Calculator::OnBnClickedButton2()
{          
	this->UpdateData(true);
	sum = y-x;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Calculator::OnBnClickedButton4()
{
	this->UpdateData(true);
	sum = y / x;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Calculator::OnBnClickedButton6()
{
	this->UpdateData(true);
	sum = sqrt(r);
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
