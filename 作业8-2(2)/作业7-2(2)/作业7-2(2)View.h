
// ��ҵ7-2(2)View.h : C��ҵ722View ��Ľӿ�
//

#pragma once


class C��ҵ722View : public CView
{
protected: // �������л�����
	C��ҵ722View();
	DECLARE_DYNCREATE(C��ҵ722View)

// ����
public:
	C��ҵ722Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ722View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowjuxing();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // ��ҵ7-2(2)View.cpp �еĵ��԰汾
inline C��ҵ722Doc* C��ҵ722View::GetDocument() const
   { return reinterpret_cast<C��ҵ722Doc*>(m_pDocument); }
#endif

