
// ��ҵ2-3View.cpp : C��ҵ23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ2-3.h"
#endif

#include "��ҵ2-3Doc.h"
#include "��ҵ2-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ23View

IMPLEMENT_DYNCREATE(C��ҵ23View, CView)

BEGIN_MESSAGE_MAP(C��ҵ23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��ҵ23View ����/����

C��ҵ23View::C��ҵ23View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ23View::~C��ҵ23View()
{
}

BOOL C��ҵ23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ23View ����

void C��ҵ23View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ23View ���

#ifdef _DEBUG
void C��ҵ23View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ23Doc* C��ҵ23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ23Doc)));
	return (C��ҵ23Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ23View ��Ϣ�������


void C��ҵ23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("�����������"));
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, s);
	CView::OnLButtonDown(nFlags, point);
}


void C��ҵ23View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString k;
	k.Format(_T("�������̧��"));
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, k);
	CView::OnLButtonUp(nFlags, point);
}
