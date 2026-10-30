/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 122519065A4D593DEFA6D4BA51D2621B21E1D87674EADF025E68EEE9CE05C2F3
 * Entry: 0x002feead, Ghidra index: 11049, label: FUN_002feead
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b58;
void FUN_002feead(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar2;
  uint local_c;
  uint local_8;
  
  if ((*param_1 != -0x7ffffffd) &&
     (((DAT_00414b58 == 0 ||
       (iVar1 = FUN_002fe4a6(param_1,param_2,param_3,param_4,param_5,param_7,param_8), iVar1 == 0))
      && (piVar2 = (int *)__GetRangeOfTrysToCheck__YAPBU_s_TryBlockMapEntry__PBU_s_FuncInfo__HHPAI1_Z
                                    (param_5,param_7,param_6,&local_8,&local_c), local_8 < local_c))
     )) {
    do {
      if (((*piVar2 <= param_6) && (param_6 <= piVar2[1])) &&
         ((iVar1 = *(int *)(piVar2[3] * 0x10 + piVar2[4] + -0xc), iVar1 == 0 ||
          (*(char *)(iVar1 + 8) == '\0')))) {
        _CatchIt__YAXPAUEHExceptionRecord__PAUEHRegistrationNode__PAU_CONTEXT__PAXPBU_s_FuncInfo__PBU_s_HandlerType__PBU_s_CatchableType__PBU_s_TryBlockMapEntry__H1E_Z
                  (param_1,param_3,param_4,param_5,param_7,param_8,1);
      }
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 5;
    } while (local_8 < local_c);
  }
  return;
}
