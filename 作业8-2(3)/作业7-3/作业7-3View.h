
// ��ҵ7-3View.h : C��ҵ73View ��Ľӿ�
//

#pragma once


class C��ҵ73View : public CView
{
protected: // �������л�����
	C��ҵ73View();
	DECLARE_DYNCREATE(C��ҵ73View)

// ����
public:
	C��ҵ73Doc* GetDocument() const;

// ����
public:
	CRect A;
	CPen pen;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ73View();
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

#ifndef _DEBUG  // ��ҵ7-3View.cpp �еĵ��԰汾
inline C��ҵ73Doc* C��ҵ73View::GetDocument() const
   { return reinterpret_cast<C��ҵ73Doc*>(m_pDocument); }
#endif

