
// ��ҵ2-ʵ��3View.h : C��ҵ2ʵ��3View ��Ľӿ�
//

#pragma once


class C��ҵ2ʵ��3View : public CView
{
protected: // �������л�����
	C��ҵ2ʵ��3View();
	DECLARE_DYNCREATE(C��ҵ2ʵ��3View)

// ����
public:
	C��ҵ2ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ2ʵ��3View();
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

#ifndef _DEBUG  // ��ҵ2-ʵ��3View.cpp �еĵ��԰汾
inline C��ҵ2ʵ��3Doc* C��ҵ2ʵ��3View::GetDocument() const
   { return reinterpret_cast<C��ҵ2ʵ��3Doc*>(m_pDocument); }
#endif

