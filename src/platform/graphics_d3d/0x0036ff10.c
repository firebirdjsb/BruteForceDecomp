/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E8D678EAA9259D61DD41E1EC140B9573C0888B1F109AA5D7013A25C5F4AD08C
 * Entry: 0x0036ff10, Ghidra index: 13336, label: FUN_0036ff10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb28;
void FUN_0036ff10(void)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar2 = DAT_0037bb28;
  piVar3 = (int *)(*(int *)(unaff_EDI + 4) + unaff_ESI);
  if (DAT_0037bb28 != 0) {
    puVar1 = (uint *)(DAT_0037bb28 + 0x14);
    puVar4 = (undefined4 *)(*(int *)(DAT_0037bb28 + 4) + *(int *)(DAT_0037bb28 + 0x10));
    uVar5 = *(int *)(DAT_0037bb28 + 0x10) + 0xc;
    *(uint *)(DAT_0037bb28 + 0x10) = uVar5;
    if (*puVar1 < uVar5) {
      return;
    }
    *puVar4 = 4;
    puVar4[1] = unaff_ESI;
    piVar3 = puVar4 + 2;
  }
  if (piVar3 != (int *)0x0) {
    if (unaff_ESI == unaff_EBX) {
      *piVar3 = 0x40100;
    }
    else {
      *piVar3 = (*(uint *)(unaff_EDI + 4) & 0xfffffff) + 1 + unaff_EBX;
    }
    if (iVar2 == 0) {
      FUN_00372180();
      return;
    }
  }
  return;
}
