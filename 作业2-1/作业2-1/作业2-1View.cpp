
// ��ҵ2-1View.cpp : C��ҵ21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ2-1.h"
#endif

#include "��ҵ2-1Doc.h"
#include "��ҵ2-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ21View

IMPLEMENT_DYNCREATE(C��ҵ21View, CView)

BEGIN_MESSAGE_MAP(C��ҵ21View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// C��ҵ21View ����/����

C��ҵ21View::C��ҵ21View()
{
	// TODO: �ڴ˴���ӹ������
	A = 10;
}

C��ҵ21View::~C��ҵ21View()
{
}

BOOL C��ҵ21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ21View ����

void C��ҵ21View::OnDraw(CDC* pDC)
{
	C��ҵ21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	S.Format(_T("����XXX"));
	CString a;
	a.Format(_T("%d"),A);
	pDC->TextOutW(200, 200, S);
	pDC->TextOutW(200, 200,a);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}

void C��ҵ21View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void C��ҵ21View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// C��ҵ21View ���

#ifdef _DEBUG
void C��ҵ21View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ21Doc* C��ҵ21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ21Doc)));
	return (C��ҵ21Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ21View ��Ϣ�������
