
// ��ҵ5-1.h : ��ҵ5-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ51App:
// �йش����ʵ�֣������ ��ҵ5-1.cpp
//

class C��ҵ51App : public CWinApp
{
public:
	C��ҵ51App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ51App theApp;
