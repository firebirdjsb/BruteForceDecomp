/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0AF1FECC79862AF1B9E921FA632142D0CACC3E4631770FF9DDA3EBEC39BA7B07
 * Entry: 0x000ba1c0, Ghidra index: 2251, label: FUN_000ba1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ba1c0(void)

{
  int iVar1;
  char cVar2;
  int unaff_EBX;
  int *unaff_EDI;
  
  cVar2 = (**(code **)(*unaff_EDI + 0xd4))();
  if (cVar2 == '\0') {
    cVar2 = *(char *)((int)unaff_EDI + 0x79);
    iVar1 = *(int *)(unaff_EDI[3] + 4);
    if (((((cVar2 == '\x02') || (cVar2 == '\x01')) || (cVar2 == '\x06')) &&
        ((((iVar1 != 0x13 && (iVar1 != 0x14)) && (iVar1 != 0x18)) || (unaff_EDI[0x6c] == 0)))) &&
       (*(short *)(unaff_EBX + 0x308) < 0x200)) {
      if (*(int **)(unaff_EBX + *(short *)(unaff_EBX + 0x308) * 8 + 0x310) != unaff_EDI) {
        FUN_0008f6a0();
      }
      *(short *)(unaff_EBX + 0x308) = *(short *)(unaff_EBX + 0x308) + 1;
    }
  }
  else if (((*(byte *)(unaff_EDI + 0x1c) & 1) == 0) && (*(short *)(unaff_EBX + 6) < 0x60)) {
    if (*(int **)(unaff_EBX + 0xc + *(short *)(unaff_EBX + 6) * 8) != unaff_EDI) {
      FUN_0008f6a0();
    }
    *(short *)(unaff_EBX + 6) = *(short *)(unaff_EBX + 6) + 1;
    return;
  }
  return;
}
