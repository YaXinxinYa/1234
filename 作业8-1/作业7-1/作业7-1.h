
// ��ҵ7-1.h : ��ҵ7-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ71App:
// �йش����ʵ�֣������ ��ҵ7-1.cpp
//

class C��ҵ71App : public CWinApp
{
public:
	C��ҵ71App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedButton1();
};

extern C��ҵ71App theApp;
