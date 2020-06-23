
// ��ҵ3-2View.cpp : C��ҵ32View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ3-2.h"
#endif

#include "��ҵ3-2Doc.h"
#include "��ҵ3-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ32View

IMPLEMENT_DYNCREATE(C��ҵ32View, CView)

BEGIN_MESSAGE_MAP(C��ҵ32View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��ҵ32View ����/����

C��ҵ32View::C��ҵ32View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ32View::~C��ҵ32View()
{
}

BOOL C��ҵ32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ32View ����

void C��ҵ32View::OnDraw(CDC* pDC)
{
	C��ҵ32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPoint point(20, 20);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->m_Point);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ32View ���

#ifdef _DEBUG
void C��ҵ32View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ32Doc* C��ҵ32View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ32Doc)));
	return (C��ҵ32Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ32View ��Ϣ�������

void C��ҵ32View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C��ҵ32Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString A;
	A.Format(_T("��갴��ʱ��%d��%d"), point.x,point.y);
	dc.TextOutW(200, 20, A);
		a1 = point.x;
		a2 = point.y;
	CView::OnLButtonDown(nFlags, point);
}

void C��ҵ32View::OnMouseMove(UINT nFlags, CPoint point)
{
	C��ҵ32Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pDoc->m_Point = point;
	InvalidateRect(NULL, FALSE);
	pDoc->count += 1;
	

	CView::OnMouseMove(nFlags, point);
}




void C��ҵ32View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��ҵ32Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString B;
	CString C;
	CString D;
		b1 = point.x;
		b2 = point.y;
		dis = sqrt((a1 - b1)*(a1 - b1) + (a2 - b2)*(a2 - b2));
		sum = (double)dis/pDoc->count ;
		D.Format(_T("����λ��%d"), dis);
		B.Format(_T("�����̧��ʱ��%d,%d"), point.x, point.y);
		dc.TextOutW(200, 40, B);
		C.Format(_T("MOVE��%d��,ƽ��%.6f�������ƶ�һ��"), pDoc->count, sum);
		dc.TextOutW(200, 60, C);
		pDoc->count = 0;
		InvalidateRect(NULL, FALSE);
	CView::OnLButtonUp(nFlags, point);
}
