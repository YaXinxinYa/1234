
// ��ҵ2-5.h : ��ҵ2-5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ25App:
// �йش����ʵ�֣������ ��ҵ2-5.cpp
//

class C��ҵ25App : public CWinApp
{
public:
	C��ҵ25App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ25App theApp;
