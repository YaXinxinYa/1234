
// ��ҵ5-1View.cpp : C��ҵ51View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ5-1.h"
#endif

#include "��ҵ5-1Doc.h"
#include "��ҵ5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ51View

IMPLEMENT_DYNCREATE(C��ҵ51View, CView)

BEGIN_MESSAGE_MAP(C��ҵ51View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ51View ����/����

C��ҵ51View::C��ҵ51View()
{
	// TODO: �ڴ˴���ӹ������
	A.top = 190;
	A.left = 190;
	A.bottom = 500;
	A.right = 510;
}

C��ҵ51View::~C��ҵ51View()
{
}

BOOL C��ҵ51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ51View ����

void C��ҵ51View::OnDraw(CDC* pDC)
{
	C��ҵ51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(A);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ51View ���

#ifdef _DEBUG
void C��ҵ51View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ51Doc* C��ҵ51View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ51Doc)));
	return (C��ҵ51Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ51View ��Ϣ�������
int i = 1;
CString s;
int x;
int y;

void C��ҵ51View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString ch;
	CClientDC dc(this);



	int position;
	int flag;
	CRect Rect(200, 200, 500, 500);

	ch.Format(_T("%c"), nChar);

	if (x >= 200 && y >= 200) {
		position = (x - 200) / 10 + (y - 200) / 20 * 30;

		s.Insert(position, nChar);
	}
	else {
		s.Append(ch);
	}
	

	dc.DrawText(s, Rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);


	CView::OnChar(nChar, nRepCnt, nFlags);
}


void C��ҵ51View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x = point.x;
	y = point.y;

	CView::OnLButtonDown(nFlags, point);
}
