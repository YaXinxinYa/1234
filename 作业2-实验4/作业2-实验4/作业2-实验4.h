
// ��ҵ2-ʵ��4.h : ��ҵ2-ʵ��4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ2ʵ��4App:
// �йش����ʵ�֣������ ��ҵ2-ʵ��4.cpp
//

class C��ҵ2ʵ��4App : public CWinAppEx
{
public:
	C��ҵ2ʵ��4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ2ʵ��4App theApp;
