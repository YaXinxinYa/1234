
// ��ҵ1-2.h : ��ҵ1-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ12App:
// �йش����ʵ�֣������ ��ҵ1-2.cpp
//

class C��ҵ12App : public CWinApp
{
public:
	C��ҵ12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ12App theApp;
