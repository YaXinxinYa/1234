
// ��ҵ2-4.h : ��ҵ2-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ24App:
// �йش����ʵ�֣������ ��ҵ2-4.cpp
//

class C��ҵ24App : public CWinApp
{
public:
	C��ҵ24App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ24App theApp;
