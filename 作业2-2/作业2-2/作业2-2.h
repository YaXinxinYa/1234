
// ��ҵ2-2.h : ��ҵ2-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ22App:
// �йش����ʵ�֣������ ��ҵ2-2.cpp
//

class C��ҵ22App : public CWinApp
{
public:
	C��ҵ22App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ22App theApp;
