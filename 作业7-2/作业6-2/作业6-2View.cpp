
// ��ҵ6-2View.cpp : C��ҵ62View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ6-2.h"
#endif

#include "��ҵ6-2Doc.h"
#include "��ҵ6-2View.h"
#include "add.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ62View

IMPLEMENT_DYNCREATE(C��ҵ62View, CView)

BEGIN_MESSAGE_MAP(C��ҵ62View, CView)
	ON_COMMAND(ID_VIEW_ADD, &C��ҵ62View::OnViewAdd)
END_MESSAGE_MAP()

// C��ҵ62View ����/����

C��ҵ62View::C��ҵ62View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ62View::~C��ҵ62View()
{
}

BOOL C��ҵ62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ62View ����

void C��ҵ62View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ62View ���

#ifdef _DEBUG
void C��ҵ62View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ62Doc* C��ҵ62View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ62Doc)));
	return (C��ҵ62Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ62View ��Ϣ�������


void C��ҵ62View::OnViewAdd()
{
	add *cp = new add;
	cp->Create(IDD_DIALOG1);
	cp->ShowWindow(1);
	// TODO: �ڴ���������������
}
