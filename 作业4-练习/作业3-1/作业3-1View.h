
// ��ҵ3-1View.h : C��ҵ31View ��Ľӿ�
//

#pragma once


class C��ҵ31View : public CView
{
protected: // �������л�����
	C��ҵ31View();
	DECLARE_DYNCREATE(C��ҵ31View)

// ����
public:
	C��ҵ31Doc* GetDocument() const;

// ����
public:
	CRect m_tagRec;
	int a1;
	int a2;
	int b1;
	int b2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ31View();
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
};

#ifndef _DEBUG  // ��ҵ3-1View.cpp �еĵ��԰汾
inline C��ҵ31Doc* C��ҵ31View::GetDocument() const
   { return reinterpret_cast<C��ҵ31Doc*>(m_pDocument); }
#endif

