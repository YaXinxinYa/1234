
// ��ҵ2-3View.h : C��ҵ23View ��Ľӿ�
//

#pragma once


class C��ҵ23View : public CView
{
protected: // �������л�����
	C��ҵ23View();
	DECLARE_DYNCREATE(C��ҵ23View)

// ����
public:
	C��ҵ23Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ23View();
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

#ifndef _DEBUG  // ��ҵ2-3View.cpp �еĵ��԰汾
inline C��ҵ23Doc* C��ҵ23View::GetDocument() const
   { return reinterpret_cast<C��ҵ23Doc*>(m_pDocument); }
#endif

