/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 389A1B84C4EFBE74DE08D6B8B7D237E3B67CCBAE663540CA93A486B4C8445836
 * Entry: 0x002daab0, Ghidra index: 10273, label: FUN_002daab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002daab0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *unaff_ESI;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)unaff_ESI[0x11]) {
    do {
      iVar4 = *(int *)((int)unaff_ESI[0xd] + iVar5 * 4);
      if (*(float *)((int)unaff_ESI[7] + iVar4 * 4) < *unaff_ESI) {
        *(undefined4 *)((int)unaff_ESI[7] + iVar4 * 4) = 0;
        fVar1 = unaff_ESI[0xd];
        iVar4 = *(int *)((int)fVar1 + -4 + (int)unaff_ESI[0x11] * 4);
        iVar2 = *(int *)((int)fVar1 + iVar5 * 4);
        iVar3 = (int)unaff_ESI[0x11] + -1;
        *(int *)((int)fVar1 + iVar5 * 4) = iVar4;
        *(int *)((int)unaff_ESI[0xd] + iVar3 * 4) = iVar2;
        *(int *)((int)unaff_ESI[0xe] + iVar4 * 4) = iVar5;
        *(int *)((int)unaff_ESI[0xe] + iVar2 * 4) = iVar3;
        unaff_ESI[0x11] = (float)((int)unaff_ESI[0x11] + -1);
        if (unaff_ESI[0x1a] == 0.0) {
          iVar4 = FUN_002dbd30();
          if (iVar4 != 1) {
            unaff_ESI[0x1a] = 2.8026e-45;
          }
        }
        else {
          unaff_ESI[0x25] = (float)((int)unaff_ESI[0x25] + -1);
        }
        iVar5 = iVar5 + -1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)unaff_ESI[0x11]);
  }
  return;
}
