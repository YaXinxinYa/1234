
// ��ҵ7-2(1)View.h : C��ҵ721View ��Ľӿ�
//

#pragma once


class C��ҵ721View : public CView
{
protected: // �������л�����
	C��ҵ721View();
	DECLARE_DYNCREATE(C��ҵ721View)

// ����
public:
	C��ҵ721Doc* GetDocument() const;

// ����
public:
	int x1;
	int y1;
	int x2;
	int y2;
	CRect A;
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ721View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��ҵ7-2(1)View.cpp �еĵ��԰汾
inline C��ҵ721Doc* C��ҵ721View::GetDocument() const
   { return reinterpret_cast<C��ҵ721Doc*>(m_pDocument); }
#endif

