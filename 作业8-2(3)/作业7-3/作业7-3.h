
// ��ҵ7-3.h : ��ҵ7-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ73App:
// �йش����ʵ�֣������ ��ҵ7-3.cpp
//

class C��ҵ73App : public CWinApp
{
public:
	C��ҵ73App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ73App theApp;
