
// ��ҵ3-2.h : ��ҵ3-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ32App:
// �йش����ʵ�֣������ ��ҵ3-2.cpp
//

class C��ҵ32App : public CWinApp
{
public:
	C��ҵ32App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ32App theApp;
