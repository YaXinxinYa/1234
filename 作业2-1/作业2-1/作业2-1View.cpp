
// 作业2-1View.cpp : C作业21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业2-1.h"
#endif

#include "作业2-1Doc.h"
#include "作业2-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业21View

IMPLEMENT_DYNCREATE(C作业21View, CView)

BEGIN_MESSAGE_MAP(C作业21View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// C作业21View 构造/析构

C作业21View::C作业21View()
{
	// TODO: 在此处添加构造代码
	A = 10;
}

C作业21View::~C作业21View()
{
}

BOOL C作业21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业21View 绘制

void C作业21View::OnDraw(CDC* pDC)
{
	C作业21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	S.Format(_T("我是XXX"));
	CString a;
	a.Format(_T("%d"),A);
	pDC->TextOutW(200, 200, S);
	pDC->TextOutW(200, 200,a);
	// TODO: 在此处为本机数据添加绘制代码
}

void C作业21View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void C作业21View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// C作业21View 诊断

#ifdef _DEBUG
void C作业21View::AssertValid() const
{
	CView::AssertValid();
}

void C作业21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业21Doc* C作业21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业21Doc)));
	return (C作业21Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业21View 消息处理程序
