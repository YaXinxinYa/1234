
// ��ҵ4-3.h : ��ҵ4-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ43App:
// �йش����ʵ�֣������ ��ҵ4-3.cpp
//

class C��ҵ43App : public CWinApp
{
public:
	C��ҵ43App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ43App theApp;
