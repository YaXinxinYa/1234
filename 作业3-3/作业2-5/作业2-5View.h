
// ��ҵ2-5View.h : C��ҵ25View ��Ľӿ�
//

#pragma once


class C��ҵ25View : public CView
{
protected: // �������л�����
	C��ҵ25View();
	DECLARE_DYNCREATE(C��ҵ25View)

// ����
public:
	C��ҵ25Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ25View();
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

#ifndef _DEBUG  // ��ҵ2-5View.cpp �еĵ��԰汾
inline C��ҵ25Doc* C��ҵ25View::GetDocument() const
   { return reinterpret_cast<C��ҵ25Doc*>(m_pDocument); }
#endif

