
// ��ҵ7-4View.h : C��ҵ74View ��Ľӿ�
//

#pragma once


class C��ҵ74View : public CView
{
protected: // �������л�����
	C��ҵ74View();
	DECLARE_DYNCREATE(C��ҵ74View)

// ����
public:
	C��ҵ74Doc* GetDocument() const;

// ����
public:CRect A;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ74View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewColor();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // ��ҵ7-4View.cpp �еĵ��԰汾
inline C��ҵ74Doc* C��ҵ74View::GetDocument() const
   { return reinterpret_cast<C��ҵ74Doc*>(m_pDocument); }
#endif

