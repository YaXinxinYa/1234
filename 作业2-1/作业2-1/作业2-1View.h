
// 作业2-1View.h : C作业21View 类的接口
//

#pragma once


class C作业21View : public CView
{
protected: // 仅从序列化创建
	C作业21View();
	DECLARE_DYNCREATE(C作业21View)

// 特性
public:
	C作业21Doc* GetDocument() const;

// 操作
public:
	CString S;
	int A;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 作业2-1View.cpp 中的调试版本
inline C作业21Doc* C作业21View::GetDocument() const
   { return reinterpret_cast<C作业21Doc*>(m_pDocument); }
#endif

