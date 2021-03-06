#pragma once
#include "afxcmn.h"


// CDlgSSSDT 对话框

class CDlgSSSDT : public CPropertyPage
{
	DECLARE_DYNAMIC(CDlgSSSDT)

public:
	CDlgSSSDT();
	virtual ~CDlgSSSDT();

// 对话框数据
	enum { IDD = IDD_DIALOG_SSSDT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list_sssdt;
	virtual BOOL OnInitDialog();
	void EnumSssdt();
	BOOLEAN GetSssdtOrgAddress();
	ULONG64 GetWin32kBase();
};
