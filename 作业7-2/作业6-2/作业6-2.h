
// ��ҵ6-2.h : ��ҵ6-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ62App:
// �йش����ʵ�֣������ ��ҵ6-2.cpp
//

class C��ҵ62App : public CWinApp
{
public:
	C��ҵ62App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ62App theApp;
