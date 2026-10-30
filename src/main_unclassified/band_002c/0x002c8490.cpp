/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 996EC43FB91D9A97EEA8C304B0A2317A5039282DDCCE31D45CFD6BFBFC7C8E7E
 * Entry: 0x002c8490, Ghidra index: 10123, label: FUN_002c8490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038e634;
void FUN_002c8490(void)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int unaff_EDI;
  
  *(undefined2 *)(unaff_EDI + 0x15c) = 0;
  *(undefined2 *)(unaff_EDI + 0x15e) = 0;
  *(undefined4 *)(unaff_EDI + 0x160) = 0;
  *(undefined2 *)(unaff_EDI + 0x164) = 1;
  *(undefined2 *)(unaff_EDI + 0x168) = 0;
  *(undefined2 *)(unaff_EDI + 0x16a) = 0;
  *(undefined2 *)(unaff_EDI + 0x170) = 1;
  *(undefined4 *)(unaff_EDI + 0x16c) = 0;
  *(undefined4 *)(unaff_EDI + 0x158) = 0;
  *(undefined4 *)(unaff_EDI + 0x17c) = 0;
  *(undefined4 *)(unaff_EDI + 0x180) = 0;
  puVar3 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_002be8e0();
    *puVar3 = &PTR_LAB_0038e634;
  }
  *(undefined4 **)(unaff_EDI + 0x178) = puVar3;
  fVar1 = 1.0;
  fVar2 = 1.0;
  iVar6 = 0x29;
  pfVar4 = (float *)(unaff_EDI + 0xa0);
  pfVar5 = (float *)(unaff_EDI + 0xa0);
  do {
    *pfVar4 = fVar1;
    iVar6 = iVar6 + -1;
    *pfVar5 = fVar2;
    fVar1 = fVar1 + fVar1;
    fVar2 = fVar2 * 0.5;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + -1;
  } while (iVar6 != 0);
  return;
}
