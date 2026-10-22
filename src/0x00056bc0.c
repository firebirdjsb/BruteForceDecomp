/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDCDEF9CFA4CC35336E71C18AF9DBB23767D7719EAD37509F0E311C34D3CD6EA
 * Entry: 0x00056bc0, Ghidra index: 835, label: FUN_00056bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00056bc0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *unaff_EBX;
  undefined4 local_4;
  
  local_4 = 0;
  for (; (param_2 != param_4 || (param_1 != param_3)); param_1 = param_1 + 1) {
    uVar2 = (int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2;
    iVar1 = uVar2 * -4;
    if (*(uint *)(param_2 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_2 + 8);
    }
    if (*(int *)(*(int *)(*(int *)(param_2 + 4) + uVar2 * 4) + (param_1 + iVar1) * 4) == *unaff_EBX)
    {
      local_4 = local_4 + 1;
    }
  }
  return local_4;
}
