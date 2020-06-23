
// ��ҵ7-4View.cpp : C��ҵ74View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ7-4.h"
#endif

#include "��ҵ7-4Doc.h"
#include "��ҵ7-4View.h"
#include "color.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ74View

IMPLEMENT_DYNCREATE(C��ҵ74View, CView)

BEGIN_MESSAGE_MAP(C��ҵ74View, CView)
	ON_COMMAND(ID_VIEW_COLOR, &C��ҵ74View::OnViewColor)
	ON_BN_CLICKED(IDC_BUTTON1, &C��ҵ74View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C��ҵ74View ����/����

C��ҵ74View::C��ҵ74View()
{
	A.top = 100;
	A.left = 200;
	A.bottom = 400;
	A.right = 700;
	// TODO: �ڴ˴���ӹ������
}

C��ҵ74View::~C��ҵ74View()
{ 
}

BOOL C��ҵ74View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ74View ����

void C��ҵ74View::OnDraw(CDC* pDC)
{
	C��ҵ74Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ74View ���

#ifdef _DEBUG
void C��ҵ74View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ74View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ74Doc* C��ҵ74View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ74Doc)));
	return (C��ҵ74Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ74View ��Ϣ�������


void C��ҵ74View::OnViewColor()
{
	color cp;
	int r = cp.DoModal();
	if (r == IDOK)
	{
		CClientDC dc(this);
		CBrush pNewBrush(RGB(cp.x, cp.y, cp.z));
		CBrush *pOldBrush = dc.SelectObject(&pNewBrush);
		dc.Ellipse(A);//
		dc.SelectObject(pOldBrush);



	}
	// TODO: �ڴ���������������
}


void C��ҵ74View::OnBnClickedButton1()
{  




	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
