
// ��ҵ4-1View.h : C��ҵ41View ��Ľӿ�
//

#pragma once


class C��ҵ41View : public CView
{
protected: // �������л�����
	C��ҵ41View();
	DECLARE_DYNCREATE(C��ҵ41View)

// ����
public:
	C��ҵ41Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ41View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // ��ҵ4-1View.cpp �еĵ��԰汾
inline C��ҵ41Doc* C��ҵ41View::GetDocument() const
   { return reinterpret_cast<C��ҵ41Doc*>(m_pDocument); }
#endif

