
// ��ҵ2-ʵ��1View.cpp : C��ҵ2ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ2-ʵ��1.h"
#endif

#include "��ҵ2-ʵ��1Doc.h"
#include "��ҵ2-ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ2ʵ��1View

IMPLEMENT_DYNCREATE(C��ҵ2ʵ��1View, CView)

BEGIN_MESSAGE_MAP(C��ҵ2ʵ��1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��ҵ2ʵ��1View ����/����

C��ҵ2ʵ��1View::C��ҵ2ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ2ʵ��1View::~C��ҵ2ʵ��1View()
{
}

BOOL C��ҵ2ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ2ʵ��1View ����

void C��ҵ2ʵ��1View::OnDraw(CDC* pDC)
{
	C��ҵ2ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i <pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ2ʵ��1View ��ӡ

BOOL C��ҵ2ʵ��1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C��ҵ2ʵ��1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C��ҵ2ʵ��1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C��ҵ2ʵ��1View ���

#ifdef _DEBUG
void C��ҵ2ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ2ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ2ʵ��1Doc* C��ҵ2ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ2ʵ��1Doc)));
	return (C��ҵ2ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ2ʵ��1View ��Ϣ�������


void C��ҵ2ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int a = rand() % 50 + 5;
	

	CRect cr(point.x - a, point.y - a, point.x + a, point.y + a);     //����   �����Բ
	C��ҵ2ʵ��1Doc* pDoc = GetDocument();
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
