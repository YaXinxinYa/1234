
// ��ҵ1-2View.cpp : C��ҵ12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ1-2.h"
#endif

#include "��ҵ1-2Doc.h"
#include "��ҵ1-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ12View

IMPLEMENT_DYNCREATE(C��ҵ12View, CView)

BEGIN_MESSAGE_MAP(C��ҵ12View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ12View ����/����

C��ҵ12View::C��ҵ12View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ12View::~C��ҵ12View()
{
}

BOOL C��ҵ12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ12View ����

void C��ҵ12View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ12View ���

#ifdef _DEBUG
void C��ҵ12View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ12Doc* C��ҵ12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ12Doc)));
	return (C��ҵ12Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ12View ��Ϣ�������


void C��ҵ12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��ҵ12Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->count += 1;
	



	CView::OnLButtonDown(nFlags, point);
}


void C��ҵ12View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��ҵ12Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString xx;
	xx.Format(_T("%d"), pDoc->count);
	dc.TextOutW(600, 600, xx);
	CView::OnRButtonDown(nFlags, point);
}
