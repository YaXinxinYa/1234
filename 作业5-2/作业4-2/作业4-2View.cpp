
// ��ҵ4-2View.cpp : C��ҵ42View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ4-2.h"
#endif

#include "��ҵ4-2Doc.h"
#include "��ҵ4-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ42View

IMPLEMENT_DYNCREATE(C��ҵ42View, CView)

BEGIN_MESSAGE_MAP(C��ҵ42View, CView)
END_MESSAGE_MAP()

// C��ҵ42View ����/����

C��ҵ42View::C��ҵ42View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

}

C��ҵ42View::~C��ҵ42View()
{
}

BOOL C��ҵ42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ42View ����

void C��ҵ42View::OnDraw(CDC* pDC)
{
	C��ҵ42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ42View ���

#ifdef _DEBUG
void C��ҵ42View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ42Doc* C��ҵ42View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ42Doc)));
	return (C��ҵ42Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ42View ��Ϣ�������
