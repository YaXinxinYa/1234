
// ��ҵ7-��ϰ3View.h : C��ҵ7��ϰ3View ��Ľӿ�
//

#pragma once


class C��ҵ7��ϰ3View : public CView
{
protected: // �������л�����
	C��ҵ7��ϰ3View();
	DECLARE_DYNCREATE(C��ҵ7��ϰ3View)

// ����
public:
	C��ҵ7��ϰ3Doc* GetDocument() const;

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
	virtual ~C��ҵ7��ϰ3View();
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
	afx_msg void OnViewShowlist();
};

#ifndef _DEBUG  // ��ҵ7-��ϰ3View.cpp �еĵ��԰汾
inline C��ҵ7��ϰ3Doc* C��ҵ7��ϰ3View::GetDocument() const
   { return reinterpret_cast<C��ҵ7��ϰ3Doc*>(m_pDocument); }
#endif

