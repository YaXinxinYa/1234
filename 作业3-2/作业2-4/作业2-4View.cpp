
// ��ҵ2-4View.cpp : C��ҵ24View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ2-4.h"
#endif

#include "��ҵ2-4Doc.h"
#include "��ҵ2-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ24View

IMPLEMENT_DYNCREATE(C��ҵ24View, CView)

BEGIN_MESSAGE_MAP(C��ҵ24View, CView)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ24View ����/����

C��ҵ24View::C��ҵ24View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ24View::~C��ҵ24View()
{
}

BOOL C��ҵ24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ24View ����

void C��ҵ24View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ24View ���

#ifdef _DEBUG
void C��ҵ24View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ24Doc* C��ҵ24View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ24Doc)));
	return (C��ҵ24Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ24View ��Ϣ�������


void C��ҵ24View::OnLButtonUp(UINT nFlags, CPoint point)
{
	

	CView::OnLButtonUp(nFlags, point);
}


void C��ҵ24View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��ҵ24Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, pDoc->A);
	CView::OnLButtonDown(nFlags, point);
}
