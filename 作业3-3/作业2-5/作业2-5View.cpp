
// ��ҵ2-5View.cpp : C��ҵ25View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ2-5.h"
#endif

#include "��ҵ2-5Doc.h"
#include "��ҵ2-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ25View

IMPLEMENT_DYNCREATE(C��ҵ25View, CView)

BEGIN_MESSAGE_MAP(C��ҵ25View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ25View ����/����

C��ҵ25View::C��ҵ25View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ25View::~C��ҵ25View()
{
}

BOOL C��ҵ25View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ25View ����

void C��ҵ25View::OnDraw(CDC* pDC)
{
	C��ҵ25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr1);
	pDC->Rectangle(pDoc->cr2);
	pDC->Rectangle(pDoc->cr3);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ25View ���

#ifdef _DEBUG
void C��ҵ25View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ25View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ25Doc* C��ҵ25View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ25Doc)));
	return (C��ҵ25Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ25View ��Ϣ�������


void C��ҵ25View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C��ҵ25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	;
	CString A, B, C, D;

	D = _T("�����Ч");

	if (point.x > 100 && point.x < 200 && point.y>200 && point.y < 300)
	{
		pDoc->a = rand() % 50 + 5;
		A.Format(_T("a=%d"), pDoc->a);
		dc.TextOutW(150, 250, A);

	}
	else
		if (point.x > 400 && point.x < 500 && point.y>400 && point.y < 600)
		{
			pDoc->b = rand() % 50 + 5;
			B.Format(_T("b=%d"), pDoc->b);
			dc.TextOutW(450, 500, B);

		}
		else
			if (point.x > 100 && point.x < 250 && point.y>400 && point.y < 500)
			{
				pDoc->c = pDoc->a + pDoc->b;
				C.Format(_T("a+b=%d"), pDoc->c);
				dc.TextOutW(150, 450, C);


			}
			else
				dc.TextOutW(500, 300, D);


	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}
