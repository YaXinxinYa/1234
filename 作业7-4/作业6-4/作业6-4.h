
// ��ҵ6-4.h : ��ҵ6-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ64App:
// �йش����ʵ�֣������ ��ҵ6-4.cpp
//

class C��ҵ64App : public CWinApp
{
public:
	C��ҵ64App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ64App theApp;
