
// ��ҵ2-4View.h : C��ҵ24View ��Ľӿ�
//

#pragma once


class C��ҵ24View : public CView
{
protected: // �������л�����
	C��ҵ24View();
	DECLARE_DYNCREATE(C��ҵ24View)

// ����
public:
	C��ҵ24Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��ҵ2-4View.cpp �еĵ��԰汾
inline C��ҵ24Doc* C��ҵ24View::GetDocument() const
   { return reinterpret_cast<C��ҵ24Doc*>(m_pDocument); }
#endif

