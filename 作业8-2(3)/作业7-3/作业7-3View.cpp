
// ��ҵ7-3View.cpp : C��ҵ73View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ7-3.h"
#endif

#include "��ҵ7-3Doc.h"
#include "��ҵ7-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ73View

IMPLEMENT_DYNCREATE(C��ҵ73View, CView)

BEGIN_MESSAGE_MAP(C��ҵ73View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ73View ����/����

C��ҵ73View::C��ҵ73View()
{
	// TODO: �ڴ˴���ӹ������
	A.top = 100;
	A.left = 200;
	A.bottom = 400;
	A.right = 700;


	
}

C��ҵ73View::~C��ҵ73View()
{
}

BOOL C��ҵ73View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ73View ����

void C��ҵ73View::OnDraw(CDC* pDC)
{
	C��ҵ73Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ73View ���

#ifdef _DEBUG
void C��ҵ73View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ73View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ73Doc* C��ҵ73View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ73Doc)));
	return (C��ҵ73Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ73View ��Ϣ�������


void C��ҵ73View::OnLButtonDown(UINT nFlags, CPoint point)
{  
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	if (point.x > 200 && point.x < 700 && point.y>100 && point.y < 400)
	{
		CClientDC dc(this);
		CPen *oldpen;
		CPen	newpen;
		newpen.CreatePen(PS_DASH, 1, RGB(255, 0, 0));
		oldpen = dc.SelectObject(&newpen);
		CRect B(200, 100, 700, 400);
		GetDC()->Rectangle(B);
		GetDC()->SelectObject(oldpen);
		GetDC()->Ellipse(A);
		

	}




	CView::OnLButtonDown(nFlags, point);
}
