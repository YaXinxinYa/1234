
// ��ҵ4-1View.cpp : C��ҵ41View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ4-1.h"
#endif

#include "��ҵ4-1Doc.h"
#include "��ҵ4-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ41View

IMPLEMENT_DYNCREATE(C��ҵ41View, CView)

BEGIN_MESSAGE_MAP(C��ҵ41View, CView)
	ON_COMMAND(ID_SHOWNAME, &C��ҵ41View::OnShowname)
END_MESSAGE_MAP()

// C��ҵ41View ����/����

C��ҵ41View::C��ҵ41View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ41View::~C��ҵ41View()
{
}

BOOL C��ҵ41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ41View ����

void C��ҵ41View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ41View ���

#ifdef _DEBUG
void C��ҵ41View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ41Doc* C��ҵ41View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ41Doc)));
	return (C��ҵ41Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ41View ��Ϣ�������


void C��ҵ41View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s=_T("�˼���");
	CClientDC dc(this);
	dc.TextOutW(300, 300, s);
}
