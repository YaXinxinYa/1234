
// ��һ��-1View.cpp : C��һ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��һ��-1.h"
#endif

#include "��һ��-1Doc.h"
#include "��һ��-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��һ��1View

IMPLEMENT_DYNCREATE(C��һ��1View, CView)

BEGIN_MESSAGE_MAP(C��һ��1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��һ��1View ����/����

C��һ��1View::C��һ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��һ��1View::~C��һ��1View()
{
}

BOOL C��һ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��һ��1View ����

void C��һ��1View::OnDraw(CDC* pDC)
{
	C��һ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��һ��1View ���

#ifdef _DEBUG
void C��һ��1View::AssertValid() const
{
	CView::AssertValid();
}

void C��һ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��һ��1Doc* C��һ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��һ��1Doc)));
	return (C��һ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��һ��1View ��Ϣ�������



void C��һ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��һ��1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 200, pDoc->name);

	CView::OnLButtonDown(nFlags, point);
}
