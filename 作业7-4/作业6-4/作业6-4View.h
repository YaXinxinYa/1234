
// ��ҵ6-4View.h : C��ҵ64View ��Ľӿ�
//

#pragma once


class C��ҵ64View : public CView
{
protected: // �������л�����
	C��ҵ64View();
	DECLARE_DYNCREATE(C��ҵ64View)

// ����
public:
	C��ҵ64Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ64View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewLink();
};

#ifndef _DEBUG  // ��ҵ6-4View.cpp �еĵ��԰汾
inline C��ҵ64Doc* C��ҵ64View::GetDocument() const
   { return reinterpret_cast<C��ҵ64Doc*>(m_pDocument); }
#endif

