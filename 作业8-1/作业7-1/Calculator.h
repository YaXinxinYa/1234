#pragma once


// Calculator �Ի���

class Calculator : public CDialogEx
{
	DECLARE_DYNAMIC(Calculator)

public:
	Calculator(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Calculator();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	int x;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton3();
	int y;
	double sum;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
	double r;
	afx_msg void OnBnClickedButton6();
};
