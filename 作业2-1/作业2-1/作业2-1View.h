
// ��ҵ2-1View.h : C��ҵ21View ��Ľӿ�
//

#pragma once


class C��ҵ21View : public CView
{
protected: // �������л�����
	C��ҵ21View();
	DECLARE_DYNCREATE(C��ҵ21View)

// ����
public:
	C��ҵ21Doc* GetDocument() const;

// ����
public:
	CString S;
	int A;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ��ҵ2-1View.cpp �еĵ��԰汾
inline C��ҵ21Doc* C��ҵ21View::GetDocument() const
   { return reinterpret_cast<C��ҵ21Doc*>(m_pDocument); }
#endif

