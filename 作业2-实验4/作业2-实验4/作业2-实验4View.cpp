
// ��ҵ2-ʵ��4View.cpp : C��ҵ2ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ2-ʵ��4.h"
#endif

#include "��ҵ2-ʵ��4Doc.h"
#include "��ҵ2-ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ2ʵ��4View

IMPLEMENT_DYNCREATE(C��ҵ2ʵ��4View, CView)

BEGIN_MESSAGE_MAP(C��ҵ2ʵ��4View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ2ʵ��4View ����/����

C��ҵ2ʵ��4View::C��ҵ2ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ2ʵ��4View::~C��ҵ2ʵ��4View()
{
}

BOOL C��ҵ2ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ2ʵ��4View ����

void C��ҵ2ʵ��4View::OnDraw(CDC* pDC)
{
	C��ҵ2ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}

void C��ҵ2ʵ��4View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void C��ҵ2ʵ��4View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// C��ҵ2ʵ��4View ���

#ifdef _DEBUG
void C��ҵ2ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ2ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ2ʵ��4Doc* C��ҵ2ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ2ʵ��4Doc)));
	return (C��ҵ2ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ2ʵ��4View ��Ϣ�������


void C��ҵ2ʵ��4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
		CClientDC dc(this);
		CDC *pDC = GetDC();
CRect cr;
	this->GetClientRect(&cr);
CBrush Brush(RGB(123,255, 255));
CBrush *oldBrush;
oldBrush = pDC->SelectObject(&Brush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldBrush);
	
	
	CView::OnLButtonDown(nFlags, point);
}
