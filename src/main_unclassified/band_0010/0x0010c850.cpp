/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DDFA0868EFE788791405126D65C22C8D0DFDB750E3CC06352B1340CF3812A42
 * Entry: 0x0010c850, Ghidra index: 3471, label: FUN_0010c850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 * FUN_0010c850(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x70);
  if (-1 < (int)uVar1) {
    if (*(int *)(in_ECX + 100) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2;
    }
    if ((uVar1 < uVar3) && (iVar2 = *(int *)(*(int *)(in_ECX + 100) + uVar1 * 4), iVar2 != 0)) {
      return (undefined4 *)(iVar2 + 0x24);
    }
  }
  return &DAT_0046d064;
}
