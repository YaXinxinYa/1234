
// ��ҵ7-4.h : ��ҵ7-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ74App:
// �йش����ʵ�֣������ ��ҵ7-4.cpp
//

class C��ҵ74App : public CWinApp
{
public:
	C��ҵ74App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ74App theApp;
