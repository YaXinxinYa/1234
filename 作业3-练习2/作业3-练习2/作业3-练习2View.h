
// 作业3-练习2View.h : C作业3练习2View 类的接口
//

#pragma once


class C作业3练习2View : public CView
{
protected: // 仅从序列化创建
	C作业3练习2View();
	DECLARE_DYNCREATE(C作业3练习2View)

// 特性
public:
	C作业3练习2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业3练习2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 作业3-练习2View.cpp 中的调试版本
inline C作业3练习2Doc* C作业3练习2View::GetDocument() const
   { return reinterpret_cast<C作业3练习2Doc*>(m_pDocument); }
#endif

