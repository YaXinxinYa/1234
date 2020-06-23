
// ��ҵ7-��ϰ2View.cpp : C��ҵ7��ϰ2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ7-��ϰ2.h"
#endif

#include "��ҵ7-��ϰ2Doc.h"
#include "��ҵ7-��ϰ2View.h"
#include "mydlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ7��ϰ2View

IMPLEMENT_DYNCREATE(C��ҵ7��ϰ2View, CView)

BEGIN_MESSAGE_MAP(C��ҵ7��ϰ2View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_VIEW_SHOWEDIT, &C��ҵ7��ϰ2View::OnViewShowedit)
END_MESSAGE_MAP()

// C��ҵ7��ϰ2View ����/����

C��ҵ7��ϰ2View::C��ҵ7��ϰ2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ7��ϰ2View::~C��ҵ7��ϰ2View()
{
}

BOOL C��ҵ7��ϰ2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ7��ϰ2View ����

void C��ҵ7��ϰ2View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ7��ϰ2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ7��ϰ2View ���

#ifdef _DEBUG
void C��ҵ7��ϰ2View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ7��ϰ2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ7��ϰ2Doc* C��ҵ7��ϰ2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ7��ϰ2Doc)));
	return (C��ҵ7��ϰ2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ7��ϰ2View ��Ϣ�������


void C��ҵ7��ϰ2View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);  //��������
	int r = cfd.DoModal();  //�����Ի���
	CClientDC dc(this);
	if (r == IDOK)                   //����˳��Ի���ʱѡ��ΪOK�Ļ�

	{
		CString filename = cfd.GetPathName();

		dc.TextOutW(300, 200, filename);
		A = filename;
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void C��ҵ7��ϰ2View::OnViewShowedit()
{
	CClientDC dc(this);
	mydlg cr;
	cr.X = A;
	UpdateData(false);
	int r = cr.DoModal();
	if (r == IDOK)
	{
		dc.TextOutW(100, 100, A);
		


	}

	// TODO: �ڴ���������������
}
