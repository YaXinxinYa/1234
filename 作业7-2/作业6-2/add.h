#pragma once


// add �Ի���

class add : public CDialogEx
{
	DECLARE_DYNAMIC(add)

public:
	add(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~add();

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
	int y;
	afx_msg void OnEnChangeEdit3();
	int r;
	afx_msg void OnBnClickedButton1();
};
