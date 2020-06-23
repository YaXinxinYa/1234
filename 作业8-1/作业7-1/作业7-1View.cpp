
// ��ҵ7-1View.cpp : C��ҵ71View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ7-1.h"
#endif

#include "��ҵ7-1Doc.h"
#include "��ҵ7-1View.h"
#include "Calculator.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ71View

IMPLEMENT_DYNCREATE(C��ҵ71View, CView)

BEGIN_MESSAGE_MAP(C��ҵ71View, CView)
	ON_COMMAND(ID_VIEW_CALCULATOR, &C��ҵ71View::OnViewCalculator)
END_MESSAGE_MAP()

// C��ҵ71View ����/����

C��ҵ71View::C��ҵ71View()
{
	a.Format(_T("����������ͼ�˵���"));
	// TODO: �ڴ˴���ӹ������

}

C��ҵ71View::~C��ҵ71View()
{
}

BOOL C��ҵ71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ71View ����

void C��ҵ71View::OnDraw(CDC* pDC)
{
	C��ҵ71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 200,a);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ71View ���

#ifdef _DEBUG
void C��ҵ71View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ71Doc* C��ҵ71View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ71Doc)));
	return (C��ҵ71Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ71View ��Ϣ�������


void C��ҵ71View::OnViewCalculator()
{
	Calculator *cp = new Calculator();
	cp->Create(IDD_DIALOG1);
	cp->ShowWindow(1);


	// TODO: �ڴ���������������
}
