
// ��ҵ7-��ϰ2View.h : C��ҵ7��ϰ2View ��Ľӿ�
//

#pragma once


class C��ҵ7��ϰ2View : public CView
{
protected: // �������л�����
	C��ҵ7��ϰ2View();
	DECLARE_DYNCREATE(C��ҵ7��ϰ2View)

// ����
public:
	C��ҵ7��ϰ2Doc* GetDocument() const;

// ����
public:
	CString A;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ7��ϰ2View();
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
	afx_msg void OnViewShowedit();
};

#ifndef _DEBUG  // ��ҵ7-��ϰ2View.cpp �еĵ��԰汾
inline C��ҵ7��ϰ2Doc* C��ҵ7��ϰ2View::GetDocument() const
   { return reinterpret_cast<C��ҵ7��ϰ2Doc*>(m_pDocument); }
#endif

