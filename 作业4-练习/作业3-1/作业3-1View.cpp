
// ��ҵ3-1View.cpp : C��ҵ31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ3-1.h"
#endif

#include "��ҵ3-1Doc.h"
#include "��ҵ3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ31View

IMPLEMENT_DYNCREATE(C��ҵ31View, CView)

BEGIN_MESSAGE_MAP(C��ҵ31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��ҵ31View ����/����

C��ҵ31View::C��ҵ31View()
{
	m_tagRec.left = a1;
	m_tagRec.top= a2;
	m_tagRec.right = b1;
	m_tagRec.bottom = b2;
	
	// TODO: �ڴ˴���ӹ������

}

C��ҵ31View::~C��ҵ31View()
{
}

BOOL C��ҵ31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ31View ����

void C��ҵ31View::OnDraw(CDC* pDC)
{
	C��ҵ31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(m_tagRec);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ31View ���

#ifdef _DEBUG
void C��ҵ31View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ31Doc* C��ҵ31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ31Doc)));
	return (C��ҵ31Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ31View ��Ϣ�������


void C��ҵ31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString S;
	S.Format(_T("%d,%d"), point.x, point.y);
	dc.TextOutW(point.x, point.y, S);
	 a1 = point.x;
	 a2 = point.y;
	CView::OnLButtonDown(nFlags, point);
}




void C��ҵ31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString K;
	K.Format(_T("%d,%d"), point.x, point.y);
	dc.TextOutW(point.x, point.y, K);
	 b1 = point.x;
	 b2 = point.y;
	 m_tagRec.left = a1;
	 m_tagRec.top = a2;
	 m_tagRec.right = b1;
	 m_tagRec.bottom = b2;
	 Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
