
// ��ҵ7-1View.h : C��ҵ71View ��Ľӿ�
//

#pragma once


class C��ҵ71View : public CView
{
protected: // �������л�����
	C��ҵ71View();
	DECLARE_DYNCREATE(C��ҵ71View)

// ����
public:
	C��ҵ71Doc* GetDocument() const;

// ����
public:CString a;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewCalculator();
};

#ifndef _DEBUG  // ��ҵ7-1View.cpp �еĵ��԰汾
inline C��ҵ71Doc* C��ҵ71View::GetDocument() const
   { return reinterpret_cast<C��ҵ71Doc*>(m_pDocument); }
#endif

