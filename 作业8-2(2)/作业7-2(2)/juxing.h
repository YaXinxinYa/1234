#pragma once


// juxing �Ի���

class juxing : public CDialogEx
{
	DECLARE_DYNAMIC(juxing)

public:
	juxing(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~juxing();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	int top;
	int left;
	int bottom;
	int right;
	afx_msg void OnBnClickedButton1();
};
