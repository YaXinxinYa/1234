
// ��ҵ3-4.h : ��ҵ3-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ34App:
// �йش����ʵ�֣������ ��ҵ3-4.cpp
//

class C��ҵ34App : public CWinApp
{
public:
	C��ҵ34App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ34App theApp;
