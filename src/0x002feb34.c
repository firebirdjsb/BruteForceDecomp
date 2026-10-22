/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4701F838D4C05664EBA26D2C80561E1CACAE70B5DAE822B6E657C38071550F0
 * Entry: 0x002feb34, Ghidra index: 11045, label: ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038c6b0;
extern uint32_t DAT_00414b4c;
extern uint32_t DAT_00414b50;
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    
   ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z
   
   Library: Visual Studio 2003 Release */

undefined4
_CallCatchBlock__YAPAXPAUEHExceptionRecord__PAUEHRegistrationNode__PAU_CONTEXT__PBU_s_FuncInfo__PAXHK_Z
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0038c6b0;
  uStack_c = 0x2feb40;
  local_24 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  __CreateFrameInfo__YAPAUFrameInfo__PAU1_PAX_Z(local_30,*(undefined4 *)(param_1 + 0x18));
  DAT_00414b4c = param_1;
  DAT_00414b50 = param_3;
  local_8 = (undefined *)0x1;
  local_20 = FUN_002fe455(param_2,param_4);
  local_8 = (undefined *)0xffffffff;
  FUN_002fec6c();
  return local_20;
}
