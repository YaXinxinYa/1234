
// ��ҵ3-��ϰ1View.cpp : C��ҵ3��ϰ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ3-��ϰ1.h"
#endif

#include "��ҵ3-��ϰ1Doc.h"
#include "��ҵ3-��ϰ1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ3��ϰ1View

IMPLEMENT_DYNCREATE(C��ҵ3��ϰ1View, CView)

BEGIN_MESSAGE_MAP(C��ҵ3��ϰ1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ3��ϰ1View ����/����

C��ҵ3��ϰ1View::C��ҵ3��ϰ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ3��ϰ1View::~C��ҵ3��ϰ1View()
{
}

BOOL C��ҵ3��ϰ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ3��ϰ1View ����

void C��ҵ3��ϰ1View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ3��ϰ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ3��ϰ1View ���

#ifdef _DEBUG
void C��ҵ3��ϰ1View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ3��ϰ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ3��ϰ1Doc* C��ҵ3��ϰ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ3��ϰ1Doc)));
	return (C��ҵ3��ϰ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ3��ϰ1View ��Ϣ�������


void C��ҵ3��ϰ1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r;
	CRect cr;
	this->GetClientRect(&cr);
	if (cr.Height()>cr.Width()) r = cr.Width() / 2;
	else r = cr.Height() / 2;
	int y = cr.Height() / 2;
	int x = cr.Width() / 2;
	CClientDC dc(this); //��1    �ͻ������Բ
	dc.Ellipse(x - r, y - r, x + r, y + r);

	CView::OnLButtonDown(nFlags, point);
}
