
// ��ҵ3-2View.h : C��ҵ32View ��Ľӿ�
//

#pragma once


class C��ҵ32View : public CView
{
protected: // �������л�����
	C��ҵ32View();
	DECLARE_DYNCREATE(C��ҵ32View)

// ����
public:
	C��ҵ32Doc* GetDocument() const;

// ����
public:
	int a1;
	int a2;
	int b1;
	int b2;
	double dis;
	double sum;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ32View();
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

#ifndef _DEBUG  // ��ҵ3-2View.cpp �еĵ��԰汾
inline C��ҵ32Doc* C��ҵ32View::GetDocument() const
   { return reinterpret_cast<C��ҵ32Doc*>(m_pDocument); }
#endif

