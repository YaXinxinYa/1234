
// ��ҵ6-1.h : ��ҵ6-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ61App:
// �йش����ʵ�֣������ ��ҵ6-1.cpp
//

class C��ҵ61App : public CWinApp
{
public:
	C��ҵ61App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ61App theApp;
