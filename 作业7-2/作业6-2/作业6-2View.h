
// ��ҵ6-2View.h : C��ҵ62View ��Ľӿ�
//

#pragma once


class C��ҵ62View : public CView
{
protected: // �������л�����
	C��ҵ62View();
	DECLARE_DYNCREATE(C��ҵ62View)

// ����
public:
	C��ҵ62Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ62View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewAdd();
};

#ifndef _DEBUG  // ��ҵ6-2View.cpp �еĵ��԰汾
inline C��ҵ62Doc* C��ҵ62View::GetDocument() const
   { return reinterpret_cast<C��ҵ62Doc*>(m_pDocument); }
#endif

