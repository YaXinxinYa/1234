
// ��ҵ3-4View.h : C��ҵ34View ��Ľӿ�
//

#pragma once


class C��ҵ34View : public CView
{
protected: // �������л�����
	C��ҵ34View();
	DECLARE_DYNCREATE(C��ҵ34View)

// ����
public:
	C��ҵ34Doc* GetDocument() const;

// ����
public:
	int N;
	CArray<CRect, CRect>cr;
	bool set;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ34View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // ��ҵ3-4View.cpp �еĵ��԰汾
inline C��ҵ34Doc* C��ҵ34View::GetDocument() const
   { return reinterpret_cast<C��ҵ34Doc*>(m_pDocument); }
#endif

