
// ��ҵ7-��ϰ3View.cpp : C��ҵ7��ϰ3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ7-��ϰ3.h"
#endif

#include "��ҵ7-��ϰ3Doc.h"
#include "��ҵ7-��ϰ3View.h"
#include "mydlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ7��ϰ3View

IMPLEMENT_DYNCREATE(C��ҵ7��ϰ3View, CView)

BEGIN_MESSAGE_MAP(C��ҵ7��ϰ3View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_VIEW_SHOWLIST, &C��ҵ7��ϰ3View::OnViewShowlist)
END_MESSAGE_MAP()

// C��ҵ7��ϰ3View ����/����

C��ҵ7��ϰ3View::C��ҵ7��ϰ3View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ7��ϰ3View::~C��ҵ7��ϰ3View()
{
}

BOOL C��ҵ7��ϰ3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ7��ϰ3View ����

void C��ҵ7��ϰ3View::OnDraw(CDC* /*pDC*/)
{
	C��ҵ7��ϰ3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ7��ϰ3View ���

#ifdef _DEBUG
void C��ҵ7��ϰ3View::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ7��ϰ3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ7��ϰ3Doc* C��ҵ7��ϰ3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ7��ϰ3Doc)));
	return (C��ҵ7��ϰ3Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ7��ϰ3View ��Ϣ�������


void C��ҵ7��ϰ3View::OnLButtonDblClk(UINT nFlags, CPoint point)
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


void C��ҵ7��ϰ3View::OnViewShowlist()
{
	mydlg cr;
	cr.B = A;
	cr.DoModal();



	// TODO: �ڴ���������������
}
