#pragma once
#include "afxwin.h"


// mydlg �Ի���

class mydlg : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg)

public:
	mydlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mydlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif
	CString B;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListBox listbox;
	virtual BOOL OnInitDialog();
};
