
// ��ҵ3-��ϰ2View.cpp : C��ҵ3��ϰ2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ3-��ϰ2.h"
#endif

#include "��ҵ3-��ϰ2Doc.h"
#include "��ҵ3-��ϰ2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ3��ϰ2View

IMPLEMENT_DYNCREATE(C��ҵ3��ϰ2View, CView)

BEGIN_MESSAGE_MAP(C��ҵ3��ϰ2View, CView)
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��ҵ3��ϰ2View ����/����

C��ҵ3��ϰ2View::C��ҵ3��ϰ2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ3��ϰ2View::~C��ҵ3��ϰ2View()
{
}

BOOL C��ҵ3��ϰ2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ3��ϰ2View ����

void C��ҵ3��ϰ2View::OnDraw(CDC* pDC)
{
	C��ҵ3��ϰ2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i <pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ3��ϰ2View ���

#ifdef _DEBUG
void C��ҵ3��ϰ2View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ3��ϰ2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ3��ϰ2Doc* C��ҵ3��ϰ2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ3��ϰ2Doc)));
	return (C��ҵ3��ϰ2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ3��ϰ2View ��Ϣ�������


void C��ҵ3��ϰ2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int a = rand() % 50 + 5;
	int b = rand() % 80 + 1;

	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);     //����   �����Բ
	C��ҵ3��ϰ2Doc* pDoc = GetDocument();
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
