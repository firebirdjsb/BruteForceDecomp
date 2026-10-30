/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2085A18BB62DB25305D9578AE269857CE7036086508B1DAF860DE21FF5FDFA5E
 * Entry: 0x002ec8f9, Ghidra index: 10663, label: __umatherr
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6d10;
/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2003 Release */

float10 __umatherr(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  int iVar1;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  iVar1 = 0;
  do {
    if ((&DAT_003b6d10)[iVar1 * 2] == param_2) {
      local_20 = *(int *)(iVar1 * 8 + 0x3b6d14);
      goto LAB_002ec915;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  local_20 = 0;
LAB_002ec915:
  if (local_20 != 0) {
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_c = param_7;
    local_24 = param_1;
    uStack_8 = param_8;
    __ctrlfp(param_9,0xffff);
    iVar1 = FUN_002bf0a0(&local_24);
    if (iVar1 == 0) {
      __set_errno(param_1);
    }
    return (float10)(double)CONCAT44(uStack_8,local_c);
  }
  __ctrlfp(param_9,0xffff);
  __set_errno(param_1);
  return (float10)(double)CONCAT44(param_8,param_7);
}
