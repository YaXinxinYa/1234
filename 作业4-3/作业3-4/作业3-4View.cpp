
// ��ҵ3-4View.cpp : C��ҵ34View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ3-4.h"
#endif

#include "��ҵ3-4Doc.h"
#include "��ҵ3-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ34View

IMPLEMENT_DYNCREATE(C��ҵ34View, CView)

BEGIN_MESSAGE_MAP(C��ҵ34View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C��ҵ34View ����/����

C��ҵ34View::C��ҵ34View()
{
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
	// TODO: �ڴ˴���ӹ������

}

C��ҵ34View::~C��ҵ34View()
{
}

BOOL C��ҵ34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ34View ����

void C��ҵ34View::OnDraw(CDC* pDC)
{
	C��ҵ34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
		
		}


		// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
		for (int i = 0; i < N; i++)
		{
			pDC->Ellipse(cr[i]);
		}
	}
}


// C��ҵ34View ���

#ifdef _DEBUG
void C��ҵ34View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ34Doc* C��ҵ34View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ34Doc)));
	return (C��ҵ34Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ34View ��Ϣ�������


void C��ҵ34View::OnTimer(UINT_PTR nIDEvent)
{
	CRect ccr;
	GetClientRect(&ccr);
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	int  flag = 1;
	if(flag>0)
	{
		cr[i].top += 30;
		cr[i].bottom += 30;
	}
	else
	{
		cr[i].top -= 30;
		cr[i].bottom -= 30;
	}
if (cr[i].bottom >= ccr.bottom)
{
	flag = -1;
}


	Invalidate();



	CView::OnTimer(nIDEvent);
}
