
// ��ҵ7-2(1).h : ��ҵ7-2(1) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ721App:
// �йش����ʵ�֣������ ��ҵ7-2(1).cpp
//

class C��ҵ721App : public CWinApp
{
public:
	C��ҵ721App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ721App theApp;
