
// ��ҵ7-2(2).h : ��ҵ7-2(2) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ722App:
// �йش����ʵ�֣������ ��ҵ7-2(2).cpp
//

class C��ҵ722App : public CWinApp
{
public:
	C��ҵ722App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ722App theApp;
