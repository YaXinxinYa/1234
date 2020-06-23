
// 作业1-2View.cpp : C作业12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业1-2.h"
#endif

#include "作业1-2Doc.h"
#include "作业1-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业12View

IMPLEMENT_DYNCREATE(C作业12View, CView)

BEGIN_MESSAGE_MAP(C作业12View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// C作业12View 构造/析构

C作业12View::C作业12View()
{
	// TODO: 在此处添加构造代码

}

C作业12View::~C作业12View()
{
}

BOOL C作业12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业12View 绘制

void C作业12View::OnDraw(CDC* /*pDC*/)
{
	C作业12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业12View 诊断

#ifdef _DEBUG
void C作业12View::AssertValid() const
{
	CView::AssertValid();
}

void C作业12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业12Doc* C作业12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业12Doc)));
	return (C作业12Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业12View 消息处理程序


void C作业12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C作业12Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->count += 1;
	



	CView::OnLButtonDown(nFlags, point);
}


void C作业12View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C作业12Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString xx;
	xx.Format(_T("%d"), pDoc->count);
	dc.TextOutW(600, 600, xx);
	CView::OnRButtonDown(nFlags, point);
}
