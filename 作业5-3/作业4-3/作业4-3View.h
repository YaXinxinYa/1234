
// ��ҵ4-3View.h : C��ҵ43View ��Ľӿ�
//

#pragma once


class C��ҵ43View : public CView
{
protected: // �������л�����
	C��ҵ43View();
	DECLARE_DYNCREATE(C��ҵ43View)

// ����
public:
	C��ҵ43Doc* GetDocument() const;

// ����
public:
	int x1;
	int x2;
	int y1;
	int y2;
	CPoint start;
	int n;
	CRect A;
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ43View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnDrawrectangle();
	afx_msg void OnDrawellipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��ҵ4-3View.cpp �еĵ��԰汾
inline C��ҵ43Doc* C��ҵ43View::GetDocument() const
   { return reinterpret_cast<C��ҵ43Doc*>(m_pDocument); }
#endif

