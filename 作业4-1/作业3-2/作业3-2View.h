
// 作业3-2View.h : C作业32View 类的接口
//

#pragma once


class C作业32View : public CView
{
protected: // 仅从序列化创建
	C作业32View();
	DECLARE_DYNCREATE(C作业32View)

// 特性
public:
	C作业32Doc* GetDocument() const;

// 操作
public:
	int a1;
	int a2;
	int b1;
	int b2;
	double dis;
	double sum;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业32View();
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

#ifndef _DEBUG  // 作业3-2View.cpp 中的调试版本
inline C作业32Doc* C作业32View::GetDocument() const
   { return reinterpret_cast<C作业32Doc*>(m_pDocument); }
#endif

