
// ��ҵ7-2(1)View.cpp : C��ҵ721View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ7-2(1).h"
#endif

#include "��ҵ7-2(1)Doc.h"
#include "��ҵ7-2(1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ721View

IMPLEMENT_DYNCREATE(C��ҵ721View, CView)

BEGIN_MESSAGE_MAP(C��ҵ721View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C��ҵ721View ����/����

C��ҵ721View::C��ҵ721View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ721View::~C��ҵ721View()
{
}

BOOL C��ҵ721View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ721View ����

void C��ҵ721View::OnDraw(CDC* pDC)
{
	C��ҵ721Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ721View ���

#ifdef _DEBUG
void C��ҵ721View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ721View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ721Doc* C��ҵ721View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ721Doc)));
	return (C��ҵ721Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ721View ��Ϣ�������


void C��ҵ721View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x1 = point.x;
	y1 = point.y;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void C��ҵ721View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	x2 = point.x;
	y2 = point.y;
	A.left = x1;
	A.top = y1;
	A.right = x2;
	A.bottom = y2;
	Invalidate();
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}


void C��ҵ721View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		x2 = point.x;
		y2 = point.y;
		A.left = x1;
		A.top = y1;
		A.right = x2;
		A.bottom = y2;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
