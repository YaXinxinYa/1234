
// ��ҵ6-3.h : ��ҵ6-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ63App:
// �йش����ʵ�֣������ ��ҵ6-3.cpp
//

class C��ҵ63App : public CWinApp
{
public:
	C��ҵ63App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ63App theApp;
