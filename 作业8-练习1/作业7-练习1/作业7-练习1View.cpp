
// ��ҵ7-��ϰ1View.cpp : C��ҵ7��ϰ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ7-��ϰ1.h"
#endif

#include "��ҵ7-��ϰ1Doc.h"
#include "��ҵ7-��ϰ1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ7��ϰ1View

IMPLEMENT_DYNCREATE(C��ҵ7��ϰ1View, CView)

BEGIN_MESSAGE_MAP(C��ҵ7��ϰ1View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// C��ҵ7��ϰ1View ����/����

C��ҵ7��ϰ1View::C��ҵ7��ϰ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ7��ϰ1View::~C��ҵ7��ϰ1View()
{
}

BOOL C��ҵ7��ϰ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ7��ϰ1View ����

void C��ҵ7��ϰ1View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ7��ϰ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ7��ϰ1View ���

#ifdef _DEBUG
void C��ҵ7��ϰ1View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ7��ϰ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ7��ϰ1Doc* C��ҵ7��ϰ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ7��ϰ1Doc)));
	return (C��ҵ7��ϰ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ7��ϰ1View ��Ϣ�������


void C��ҵ7��ϰ1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);  //��������
	int r = cfd.DoModal();  //�����Ի���
	CClientDC dc(this);
	if (r == IDOK)                   //����˳��Ի���ʱѡ��ΪOK�Ļ�

	{
		CString filename = cfd.GetPathName();

		dc.TextOutW(300, 200, filename);


	}

	CView::OnLButtonDblClk(nFlags, point);
}
