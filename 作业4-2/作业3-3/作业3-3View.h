
// ��ҵ3-3View.h : C��ҵ33View ��Ľӿ�
//

#pragma once


class C��ҵ33View : public CView
{
protected: // �������л�����
	C��ҵ33View();
	DECLARE_DYNCREATE(C��ҵ33View)

// ����
public:
	C��ҵ33Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ33View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��ҵ3-3View.cpp �еĵ��԰汾
inline C��ҵ33Doc* C��ҵ33View::GetDocument() const
   { return reinterpret_cast<C��ҵ33Doc*>(m_pDocument); }
#endif

