
// ��ҵ2-2View.cpp : C��ҵ22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ2-2.h"
#endif

#include "��ҵ2-2Doc.h"
#include "��ҵ2-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ22View

IMPLEMENT_DYNCREATE(C��ҵ22View, CView)

BEGIN_MESSAGE_MAP(C��ҵ22View, CView)
END_MESSAGE_MAP()

// C��ҵ22View ����/����

C��ҵ22View::C��ҵ22View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ22View::~C��ҵ22View()
{
}

BOOL C��ҵ22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ22View ����

void C��ҵ22View::OnDraw(CDC* pDC)
{
	C��ҵ22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->A.Format(_T("%d", pDoc->a));
	pDC->TextOutW(100, 100, pDoc->A);
	pDC->TextOutW(200, 200,pDoc->S);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ22View ���

#ifdef _DEBUG
void C��ҵ22View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ22Doc* C��ҵ22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ22Doc)));
	return (C��ҵ22Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ22View ��Ϣ�������
