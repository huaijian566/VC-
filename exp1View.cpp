
// exp1View.cpp : Cexp1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp1.h"
#endif

#include "exp1Doc.h"
#include "exp1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp1View

IMPLEMENT_DYNCREATE(Cexp1View, CView)

BEGIN_MESSAGE_MAP(Cexp1View, CView)
END_MESSAGE_MAP()

// Cexp1View ����/����

Cexp1View::Cexp1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp1View::~Cexp1View()
{
}

BOOL Cexp1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp1View ����

void Cexp1View::OnDraw(CDC* pDC)
{
	Cexp1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	/*CString s1 = _T("��������");
	pDC->TextOutW(200, 200, s1);
	int a = 123;
	CString s2;
	s2.Format(_T("%d"), a);
	pDC->TextOutW(200, 100, s2);*/

	pDC->TextOutW(200, 200, pDoc->s);
	CString s1;
	s1.Format(_T("%d"), pDoc->a);
	pDC->TextOutW(200, 100, s1);
}


// Cexp1View ���

#ifdef _DEBUG
void Cexp1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp1Doc* Cexp1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp1Doc)));
	return (Cexp1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp1View ��Ϣ�������
