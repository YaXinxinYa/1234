
// ��ҵ6-3View.cpp : C��ҵ63View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ6-3.h"
#endif

#include "��ҵ6-3Doc.h"
#include "��ҵ6-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ63View

IMPLEMENT_DYNCREATE(C��ҵ63View, CView)

BEGIN_MESSAGE_MAP(C��ҵ63View, CView)
END_MESSAGE_MAP()

// C��ҵ63View ����/����

C��ҵ63View::C��ҵ63View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ63View::~C��ҵ63View()
{
}

BOOL C��ҵ63View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ63View ����

void C��ҵ63View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ63Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ63View ���

#ifdef _DEBUG
void C��ҵ63View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ63View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ63Doc* C��ҵ63View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ63Doc)));
	return (C��ҵ63Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ63View ��Ϣ�������
