
// ��ҵ6-4View.cpp : C��ҵ64View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ6-4.h"
#endif

#include "��ҵ6-4Doc.h"
#include "��ҵ6-4View.h"
#include "link.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ64View

IMPLEMENT_DYNCREATE(C��ҵ64View, CView)

BEGIN_MESSAGE_MAP(C��ҵ64View, CView)
	ON_COMMAND(ID_VIEW_LINK, &C��ҵ64View::OnViewLink)
END_MESSAGE_MAP()

// C��ҵ64View ����/����

C��ҵ64View::C��ҵ64View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ64View::~C��ҵ64View()
{
}

BOOL C��ҵ64View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ64View ����

void C��ҵ64View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ64Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ64View ���

#ifdef _DEBUG
void C��ҵ64View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ64View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ64Doc* C��ҵ64View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ64Doc)));
	return (C��ҵ64Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ64View ��Ϣ�������


void C��ҵ64View::OnViewLink()
{
	link *cr = new link();
	cr->Create(IDD_DIALOG1);
	cr->ShowWindow(1);
	
	
	// TODO: �ڴ���������������
}
