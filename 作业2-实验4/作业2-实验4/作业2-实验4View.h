
// ��ҵ2-ʵ��4View.h : C��ҵ2ʵ��4View ��Ľӿ�
//

#pragma once


class C��ҵ2ʵ��4View : public CView
{
protected: // �������л�����
	C��ҵ2ʵ��4View();
	DECLARE_DYNCREATE(C��ҵ2ʵ��4View)

// ����
public:
	C��ҵ2ʵ��4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ2ʵ��4View();
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
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��ҵ2-ʵ��4View.cpp �еĵ��԰汾
inline C��ҵ2ʵ��4Doc* C��ҵ2ʵ��4View::GetDocument() const
   { return reinterpret_cast<C��ҵ2ʵ��4Doc*>(m_pDocument); }
#endif

