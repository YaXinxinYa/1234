
// ��ҵ4-2View.h : C��ҵ42View ��Ľӿ�
//

#pragma once


class C��ҵ42View : public CView
{
protected: // �������л�����
	C��ҵ42View();
	DECLARE_DYNCREATE(C��ҵ42View)

// ����
public:
	C��ҵ42Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ42View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ��ҵ4-2View.cpp �еĵ��԰汾
inline C��ҵ42Doc* C��ҵ42View::GetDocument() const
   { return reinterpret_cast<C��ҵ42Doc*>(m_pDocument); }
#endif

