
// ��ҵ2-ʵ��3View.cpp : C��ҵ2ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ2-ʵ��3.h"
#endif

#include "��ҵ2-ʵ��3Doc.h"
#include "��ҵ2-ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ2ʵ��3View

IMPLEMENT_DYNCREATE(C��ҵ2ʵ��3View, CView)

BEGIN_MESSAGE_MAP(C��ҵ2ʵ��3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ2ʵ��3View ����/����

C��ҵ2ʵ��3View::C��ҵ2ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ2ʵ��3View::~C��ҵ2ʵ��3View()
{
}

BOOL C��ҵ2ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ2ʵ��3View ����

void C��ҵ2ʵ��3View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ2ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ2ʵ��3View ���

#ifdef _DEBUG
void C��ҵ2ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ2ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ2ʵ��3Doc* C��ҵ2ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ2ʵ��3Doc)));
	return (C��ҵ2ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ2ʵ��3View ��Ϣ�������


void C��ҵ2ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
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
