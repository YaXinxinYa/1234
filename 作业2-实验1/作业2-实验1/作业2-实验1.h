
// ��ҵ2-ʵ��1.h : ��ҵ2-ʵ��1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ2ʵ��1App:
// �йش����ʵ�֣������ ��ҵ2-ʵ��1.cpp
//

class C��ҵ2ʵ��1App : public CWinApp
{
public:
	C��ҵ2ʵ��1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ2ʵ��1App theApp;
