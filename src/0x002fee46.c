/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61E61200267752EC9C91F3277157695B22209441DFD5695714FC137866B2E161
 * Entry: 0x002fee46, Ghidra index: 11048, label: ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    
   ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z
   
   Library: Visual Studio 2003 Release */

void _CatchIt__YAXPAUEHExceptionRecord__PAUEHRegistrationNode__PAU_CONTEXT__PAXPBU_s_FuncInfo__PBU_s_HandlerType__PBU_s_CatchableType__PBU_s_TryBlockMapEntry__H1E_Z
               (undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_00000018;
  
  if (in_ECX != 0) {
    _BuildCatchObject__YAXPAUEHExceptionRecord__PAXPBU_s_HandlerType__PBU_s_CatchableType___Z
              (param_1);
  }
  if (in_stack_00000018 == 0) {
    in_stack_00000018 = unaff_ESI;
  }
  __UnwindNestedFrames__YGXPAUEHRegistrationNode__PAUEHExceptionRecord___Z
            (in_stack_00000018,param_1);
  ___FrameUnwindToState();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_EDI + 4) + 1;
  iVar1 = _CallCatchBlock__YAPAXPAUEHExceptionRecord__PAUEHRegistrationNode__PAU_CONTEXT__PBU_s_FuncInfo__PAXHK_Z
                    (param_1);
  if (iVar1 != 0) {
    __JumpToContinuation__YGXPAXPAUEHRegistrationNode___Z(iVar1);
  }
  return;
}
