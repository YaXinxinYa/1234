
// 作业6-1View.h : C作业61View 类的接口
//

#pragma once


class C作业61View : public CView
{
protected: // 仅从序列化创建
	C作业61View();
	DECLARE_DYNCREATE(C作业61View)

// 特性
public:
	C作业61Doc* GetDocument() const;

// 操作
public:
	CRect A;
	int x;
	int y;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业61View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 作业6-1View.cpp 中的调试版本
inline C作业61Doc* C作业61View::GetDocument() const
   { return reinterpret_cast<C作业61Doc*>(m_pDocument); }
#endif

