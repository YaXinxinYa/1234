
// ��ҵ3-1.h : ��ҵ3-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ31App:
// �йش����ʵ�֣������ ��ҵ3-1.cpp
//

class C��ҵ31App : public CWinApp
{
public:
	C��ҵ31App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ31App theApp;
