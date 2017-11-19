#include "StdAfx.h"
#include "Subjects\Core\LevelSystem.h"
#include <CryFlowGraph\IFlowBaseNode.h>

//class CGetXP : public CFlowBaseNode<eNCT_Instanced>
//{
//public:
//
//	enum INPUTS
//	{
//		EIP_GetXP
//	};
//
//	enum OUTPUTS
//	{
//		EOP_XP
//	};
//
//	CGetXP(SActivationInfo* pActInfo)
//	{
//	};
//
//	virtual IFlowNodePtr Clone(SActivationInfo *pActInfo)
//	{
//		return new CGetXP(pActInfo);
//	};
//
//	virtual void GetMemoryUsage(ICrySizer* s) const
//	{
//		s->Add(*this);
//	}
//
//	virtual void GetConfiguration(SFlowNodeConfig& config)
//	{
//		static const SInputPortConfig in_config[] = {
//			InputPortConfig_Void("GetXP", _HELP("Activates Node")),
//			{ 0 }
//		};
//		static const SOutputPortConfig out_config[] = {
//			OutputPortConfig<int>("XP", _HELP("Outputs XP")),
//			{ 0 }
//		};
//		config.sDescription = _HELP("Gets the players XP");
//		config.pInputPorts = in_config;
//		config.pOutputPorts = out_config;
//		config.SetCategory(EFLN_APPROVED);
//	}
//
//	virtual void ProcessEvent(EFlowEvent event, SActivationInfo* pActInfo)
//	{
//		switch (event){
//		
//		case eFE_Activate:
//
//			if (IsPortActive(pActInfo, EIP_GetXP)) {
//
//				CLevelSystem LS;
//
//				LS.startLevelSystem();
//
//				ActivateOutput(pActInfo, EOP_XP, LS.getXP());
//
//			}
//
//		}
//	}
//};
//
//REGISTER_FLOW_NODE("Game:GetXP", CGetXP);