
// ��ҵ6-1View.cpp : C��ҵ61View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ6-1.h"
#endif

#include "��ҵ6-1Doc.h"
#include "��ҵ6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ61View

IMPLEMENT_DYNCREATE(C��ҵ61View, CView)

BEGIN_MESSAGE_MAP(C��ҵ61View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��ҵ61View ����/����

C��ҵ61View::C��ҵ61View()
{
	
	// TODO: �ڴ˴���ӹ������

}

C��ҵ61View::~C��ҵ61View()
{
}

BOOL C��ҵ61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ61View ����

void C��ҵ61View::OnDraw(CDC* pDC)
{
	C��ҵ61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;


	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ61View ���

#ifdef _DEBUG
void C��ҵ61View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ61Doc* C��ҵ61View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ61Doc)));
	return (C��ҵ61Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ61View ��Ϣ�������


void C��ҵ61View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	CRect A(point.x - 100, point.y - 200, point.x + 100, point.y + 200);
	dc.Rectangle(A);
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}


void C��ҵ61View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	CRect A(point.x - 100, point.y - 200, point.x + 100,point.y + 200);
	dc.Rectangle(A);


	CView::OnLButtonDown(nFlags, point);
}


void C��ҵ61View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	
	CRect A(point.x - 100, point.y - 200, point.x + 100, point.y + 200);
	dc.Rectangle(A);

	CView::OnLButtonUp(nFlags, point);
}
