
// ��ҵ3-3View.cpp : C��ҵ33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ3-3.h"
#endif

#include "��ҵ3-3Doc.h"
#include "��ҵ3-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ33View

IMPLEMENT_DYNCREATE(C��ҵ33View, CView)

BEGIN_MESSAGE_MAP(C��ҵ33View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ33View ����/����

C��ҵ33View::C��ҵ33View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ33View::~C��ҵ33View()
{
}

BOOL C��ҵ33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ33View ����

void C��ҵ33View::OnDraw(CDC* pDC)
{
	C��ҵ33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->m_crlRect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ33View ���

#ifdef _DEBUG
void C��ҵ33View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ33Doc* C��ҵ33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ33Doc)));
	return (C��ҵ33Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ33View ��Ϣ�������


void C��ҵ33View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��ҵ33Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_crlRect.left > 0)
		{
			pDoc->m_crlRect.left -= 5;
			pDoc->m_crlRect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right  += 5;
		}
		break;
	case VK_UP:
		if (pDoc->m_crlRect.top > 0)
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top))
		{
			pDoc->m_crlRect.top += 5;
			pDoc->m_crlRect.bottom += 5;
		}
		break;

	case VK_ESCAPE:
		if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top)|| pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.top += 5;
			pDoc->m_crlRect.bottom -= 5;
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right -= 5;
		}
		break;
	

	case VK_HOME:
		if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top) || pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.bottom += 5;
			pDoc->m_crlRect.left -= 5;
			pDoc->m_crlRect.right += 5;
		}
		break;
}

InvalidateRect(NULL, TRUE);


	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void C��ҵ33View::OnLButtonDown(UINT nFlags, CPoint point)
{

	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��ҵ33Doc* pDoc = GetDocument();
	if (nFlags)
	{
		pDoc->m_crlRect.top =30;
		pDoc->m_crlRect.bottom =80;
		pDoc->m_crlRect.left =30;
		pDoc->m_crlRect.right =80;
	}

	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
