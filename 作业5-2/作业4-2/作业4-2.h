
// ��ҵ4-2.h : ��ҵ4-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ42App:
// �йش����ʵ�֣������ ��ҵ4-2.cpp
//

class C��ҵ42App : public CWinApp
{
public:
	C��ҵ42App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ42App theApp;
