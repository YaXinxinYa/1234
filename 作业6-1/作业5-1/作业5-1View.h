
// ��ҵ5-1View.h : C��ҵ51View ��Ľӿ�
//

#pragma once


class C��ҵ51View : public CView
{
protected: // �������л�����
	C��ҵ51View();
	DECLARE_DYNCREATE(C��ҵ51View)

// ����
public:
	C��ҵ51Doc* GetDocument() const;

// ����
public:
	CRect A;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ51View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��ҵ5-1View.cpp �еĵ��԰汾
inline C��ҵ51Doc* C��ҵ51View::GetDocument() const
   { return reinterpret_cast<C��ҵ51Doc*>(m_pDocument); }
#endif

