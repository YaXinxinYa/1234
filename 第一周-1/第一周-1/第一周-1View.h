
// ��һ��-1View.h : C��һ��1View ��Ľӿ�
//

#pragma once


class C��һ��1View : public CView
{
protected: // �������л�����
	C��һ��1View();
	DECLARE_DYNCREATE(C��һ��1View)

// ����
public:
	C��һ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��һ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��һ��-1View.cpp �еĵ��԰汾
inline C��һ��1Doc* C��һ��1View::GetDocument() const
   { return reinterpret_cast<C��һ��1Doc*>(m_pDocument); }
#endif

