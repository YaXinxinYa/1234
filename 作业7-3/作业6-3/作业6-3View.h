
// ��ҵ6-3View.h : C��ҵ63View ��Ľӿ�
//

#pragma once


class C��ҵ63View : public CView
{
protected: // �������л�����
	C��ҵ63View();
	DECLARE_DYNCREATE(C��ҵ63View)

// ����
public:
	C��ҵ63Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ63View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ��ҵ6-3View.cpp �еĵ��԰汾
inline C��ҵ63Doc* C��ҵ63View::GetDocument() const
   { return reinterpret_cast<C��ҵ63Doc*>(m_pDocument); }
#endif

