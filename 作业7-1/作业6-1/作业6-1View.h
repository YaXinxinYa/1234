
// ��ҵ6-1View.h : C��ҵ61View ��Ľӿ�
//

#pragma once


class C��ҵ61View : public CView
{
protected: // �������л�����
	C��ҵ61View();
	DECLARE_DYNCREATE(C��ҵ61View)

// ����
public:
	C��ҵ61Doc* GetDocument() const;

// ����
public:
	CRect A;
	int x;
	int y;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ61View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��ҵ6-1View.cpp �еĵ��԰汾
inline C��ҵ61Doc* C��ҵ61View::GetDocument() const
   { return reinterpret_cast<C��ҵ61Doc*>(m_pDocument); }
#endif

