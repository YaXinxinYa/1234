
// ��ҵ2-3.h : ��ҵ2-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ23App:
// �йش����ʵ�֣������ ��ҵ2-3.cpp
//

class C��ҵ23App : public CWinApp
{
public:
	C��ҵ23App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ23App theApp;
