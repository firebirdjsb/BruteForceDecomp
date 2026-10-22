/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCDF0D3F1C57E5E7C57BA848245AFFD08FD97EBC49388E91E3A722F64FE49F60
 * Entry: 0x000f2dc0, Ghidra index: 3034, label: FUN_000f2dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
void FUN_000f2dc0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar1 = DAT_0046995c;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    local_4 = 0x108f47e;
    uVar2 = FUN_001e97c0();
    iVar3 = (param_1 + -1) * 0x598;
    if (*(char *)(iVar3 + 0x15c + iVar1) == '\0') {
      local_4 = 0xf1addd20;
      iVar3 = FUN_001e97c0();
    }
    else {
      iVar3 = iVar3 + iVar1 + 0x670;
    }
    local_4 = 0;
    FUN_001ee060(iVar1,&local_4,uVar2,iVar3,param_2);
  }
  return;
}
