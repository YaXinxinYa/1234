
// ��ҵ2-2View.h : C��ҵ22View ��Ľӿ�
//

#pragma once


class C��ҵ22View : public CView
{
protected: // �������л�����
	C��ҵ22View();
	DECLARE_DYNCREATE(C��ҵ22View)

// ����
public:
	C��ҵ22Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ��ҵ2-2View.cpp �еĵ��԰汾
inline C��ҵ22Doc* C��ҵ22View::GetDocument() const
   { return reinterpret_cast<C��ҵ22Doc*>(m_pDocument); }
#endif

