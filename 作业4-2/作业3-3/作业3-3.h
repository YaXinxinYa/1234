
// ��ҵ3-3.h : ��ҵ3-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ33App:
// �йش����ʵ�֣������ ��ҵ3-3.cpp
//

class C��ҵ33App : public CWinApp
{
public:
	C��ҵ33App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ33App theApp;
