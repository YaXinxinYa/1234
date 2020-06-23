
// ��ҵ4-3View.cpp : C��ҵ43View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ4-3.h"
#endif

#include "��ҵ4-3Doc.h"
#include "��ҵ4-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ43View

IMPLEMENT_DYNCREATE(C��ҵ43View, CView)

BEGIN_MESSAGE_MAP(C��ҵ43View, CView)
	ON_COMMAND(ID_DRAWLINE, &C��ҵ43View::OnDrawline)
	ON_COMMAND(ID_DRAWRECTANGLE, &C��ҵ43View::OnDrawrectangle)
	ON_COMMAND(ID_DRAWELLIPSE, &C��ҵ43View::OnDrawellipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C��ҵ43View ����/����

C��ҵ43View::C��ҵ43View()
{
	// TODO: �ڴ˴���ӹ������
	A.left = x1;
	A.top = y1;
	A.right = x2;
	A.bottom = y2;

}

C��ҵ43View::~C��ҵ43View()
{
}

BOOL C��ҵ43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ43View ����

void C��ҵ43View::OnDraw(CDC* pDC)
{
	C��ҵ43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	switch (n)
	{
	case 1:
	{	POINT m_point[2]{ { x1,y1 },{ x2,y2 } };
	pDC->MoveTo(m_point[0]);
	pDC->LineTo(m_point[1]);
	break; }
	case 2:
	{pDC->Rectangle(A);
	break;
	}
	case 3:
	{pDC->Ellipse(A);
	break; }
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	}
}

// C��ҵ43View ���

#ifdef _DEBUG
void C��ҵ43View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ43Doc* C��ҵ43View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ43Doc)));
	return (C��ҵ43Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ43View ��Ϣ�������


void C��ҵ43View::OnDrawline()
{	
		 n = 1;
	// TODO: �ڴ���������������
}


void C��ҵ43View::OnDrawrectangle()
{
		n = 2;
	// TODO: �ڴ���������������
}


void C��ҵ43View::OnDrawellipse()
{
		 n = 3;

	// TODO: �ڴ���������������
}



void C��ҵ43View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x1 = point.x;
	y1 = point.y;
	start = point;
	flag = 1;

	CView::OnLButtonDown(nFlags, point);
}


void C��ҵ43View::OnLButtonUp(UINT nFlags, CPoint point)
{



	CClientDC dc(this);
	x2 = point.x;
	y2 = point.y;
	A.left = x1;
	A.top = y1;
	A.right = x2;
	A.bottom = y2;
	Invalidate();
	flag = 0;


	
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonUp(nFlags, point);
}


void C��ҵ43View::OnMouseMove(UINT nFlags, CPoint point)
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
