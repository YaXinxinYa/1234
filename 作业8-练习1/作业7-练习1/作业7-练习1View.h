
// ��ҵ7-��ϰ1View.h : C��ҵ7��ϰ1View ��Ľӿ�
//

#pragma once


class C��ҵ7��ϰ1View : public CView
{
protected: // �������л�����
	C��ҵ7��ϰ1View();
	DECLARE_DYNCREATE(C��ҵ7��ϰ1View)

// ����
public:
	C��ҵ7��ϰ1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ7��ϰ1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��ҵ7-��ϰ1View.cpp �еĵ��԰汾
inline C��ҵ7��ϰ1Doc* C��ҵ7��ϰ1View::GetDocument() const
   { return reinterpret_cast<C��ҵ7��ϰ1Doc*>(m_pDocument); }
#endif

