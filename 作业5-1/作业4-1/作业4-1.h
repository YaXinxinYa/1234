
// ��ҵ4-1.h : ��ҵ4-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ41App:
// �йش����ʵ�֣������ ��ҵ4-1.cpp
//

class C��ҵ41App : public CWinApp
{
public:
	C��ҵ41App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ41App theApp;
