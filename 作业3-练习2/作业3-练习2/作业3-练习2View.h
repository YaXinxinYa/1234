
// ��ҵ3-��ϰ2View.h : C��ҵ3��ϰ2View ��Ľӿ�
//

#pragma once


class C��ҵ3��ϰ2View : public CView
{
protected: // �������л�����
	C��ҵ3��ϰ2View();
	DECLARE_DYNCREATE(C��ҵ3��ϰ2View)

// ����
public:
	C��ҵ3��ϰ2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ3��ϰ2View();
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
};

#ifndef _DEBUG  // ��ҵ3-��ϰ2View.cpp �еĵ��԰汾
inline C��ҵ3��ϰ2Doc* C��ҵ3��ϰ2View::GetDocument() const
   { return reinterpret_cast<C��ҵ3��ϰ2Doc*>(m_pDocument); }
#endif

