/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D39871EF59E3ACE768A706BA3C5CD461B6CFEE65BAD9423F62049C57247EF177
 * Entry: 0x0006ff00, Ghidra index: 1264, label: FUN_0006ff00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006ff00(void)

{
  byte bVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x148);
  if (((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 3)) && (*(int *)(iVar2 + 0x5e4) != 0)
     ) {
    FUN_0008f6a0(0);
  }
  if (*(int *)(unaff_EDI + 0x148) != unaff_EBX) {
    FUN_0008f6a0();
  }
  if ((unaff_EBX != 0) && (*(int *)(*(int *)(unaff_EBX + 0xc) + 4) == 3)) {
    if (*(int *)(unaff_EBX + 0x7a8) == 0) {
      if ((*(byte *)(unaff_EDI + 0x4c) & 1) != 0) {
        FUN_0006e940();
        bVar1 = *(byte *)(unaff_EDI + 0x4c);
        *(byte *)(unaff_EDI + 0x4c) = bVar1 & 0xfe;
        if ((bVar1 & 0x20) != 0) {
          FUN_0006c660();
        }
      }
    }
    else if ((*(byte *)(unaff_EDI + 0x4c) & 1) == 0) {
      if ((*(byte *)(unaff_EDI + 0x4c) & 0x20) != 0) {
        FUN_0006c660();
      }
      *(byte *)(unaff_EDI + 0x4c) = *(byte *)(unaff_EDI + 0x4c) | 1;
    }
    if (*(int *)(unaff_EBX + 0x5e4) != unaff_EDI) {
      FUN_0008f6a0();
    }
  }
  return;
}
