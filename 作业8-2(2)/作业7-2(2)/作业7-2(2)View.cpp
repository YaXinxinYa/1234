
// ��ҵ7-2(2)View.cpp : C��ҵ722View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ7-2(2).h"
#endif

#include "��ҵ7-2(2)Doc.h"
#include "��ҵ7-2(2)View.h"
#include "juxing.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ722View

IMPLEMENT_DYNCREATE(C��ҵ722View, CView)

BEGIN_MESSAGE_MAP(C��ҵ722View, CView)
	ON_COMMAND(ID_SHOWJUXING, &C��ҵ722View::OnShowjuxing)
	ON_BN_CLICKED(IDC_BUTTON1, &C��ҵ722View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C��ҵ722View ����/����

C��ҵ722View::C��ҵ722View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ722View::~C��ҵ722View()
{
}

BOOL C��ҵ722View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ722View ����

void C��ҵ722View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ722Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ722View ���

#ifdef _DEBUG
void C��ҵ722View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ722View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ722Doc* C��ҵ722View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ722Doc)));
	return (C��ҵ722Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ722View ��Ϣ�������


void C��ҵ722View::OnShowjuxing()
{       
	// TODO: �ڴ���������������
	juxing cp;
	
	int r = cp.DoModal();
	if (r == IDOK)
	{
		CRect A (cp.top, cp.left, cp.bottom, cp.right);
		GetDC()->Ellipse(A);
	}
}


void C��ҵ722View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
