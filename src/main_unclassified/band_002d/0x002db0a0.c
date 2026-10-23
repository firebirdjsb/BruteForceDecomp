/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6022AEA971E85E4BAC7B59BCCC0FD25BAD66CCCF9D4D1644AF73E3F1ACD8CB9E
 * Entry: 0x002db0a0, Ghidra index: 10277, label: FUN_002db0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002db0a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0x40)) {
    do {
      *(undefined4 *)(*(int *)(unaff_ESI + 0x20) + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_ESI + 0x40));
  }
  iVar1 = *(int *)(unaff_ESI + 0x44);
  if (iVar1 == 0) {
    return 1;
  }
  if (*(int *)(unaff_ESI + 0x68) == 0) {
    iVar5 = *(int *)(*(int *)(unaff_ESI + 0x34) + *(int *)(unaff_ESI + 0x4c) * 4);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)(unaff_ESI + 0x80) + -4 + iVar2 * 4) =
             -*(float *)(*(int *)(unaff_ESI + 0x10) +
                        (*(int *)(*(int *)(unaff_ESI + 0x34) + iVar1) * *(int *)(unaff_ESI + 0x40) +
                        iVar5) * 4);
      } while (iVar2 < *(int *)(unaff_ESI + 0x44));
    }
    iVar1 = *(int *)(unaff_ESI + 0x94) + -1;
    while (-1 < iVar1) {
      iVar1 = iVar1 + -1;
      *(undefined4 *)(*(int *)(unaff_ESI + 0x8c) + 4 + iVar1 * 4) =
           *(undefined4 *)(*(int *)(unaff_ESI + 0x80) + 4 + iVar1 * 4);
    }
    FUN_002dbf80();
    FUN_002dbfd0();
    uVar3 = 1;
  }
  else {
    *(int *)(unaff_ESI + 0x9c) = iVar1;
    *(int *)(unaff_ESI + 0x54) = *(int *)(unaff_ESI + 0x54) + 1;
    *(uint *)(unaff_ESI + 0xa0) = iVar1 + 3U & 0xfffffffc;
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x34) + *(int *)(unaff_ESI + 0x4c) * 4);
    iVar5 = 0;
    if (0 < *(int *)(unaff_ESI + 0x44)) {
      do {
        iVar2 = *(int *)(*(int *)(unaff_ESI + 0x34) + iVar5 * 4);
        *(float *)(*(int *)(unaff_ESI + 0xa8) + iVar5 * 4) =
             -*(float *)(*(int *)(unaff_ESI + 0x10) +
                        (*(int *)(unaff_ESI + 0x40) * iVar2 + iVar1) * 4);
        iVar4 = 0;
        if (0 < *(int *)(unaff_ESI + 0x44)) {
          do {
            *(undefined4 *)
             (*(int *)(unaff_ESI + 0xa4) + (*(int *)(unaff_ESI + 0xa0) * iVar5 + iVar4) * 4) =
                 *(undefined4 *)
                  (*(int *)(unaff_ESI + 0x10) +
                  (*(int *)(unaff_ESI + 0x40) * iVar2 +
                  *(int *)(*(int *)(unaff_ESI + 0x34) + iVar4 * 4)) * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(unaff_ESI + 0x44));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(unaff_ESI + 0x44));
    }
    FUN_002d9e70(unaff_ESI + 0x98);
    uVar3 = FUN_002d9fb0();
    iVar1 = 0;
    if (0 < *(int *)(unaff_ESI + 0x44)) {
      do {
        *(undefined4 *)(*(int *)(unaff_ESI + 0x84) + iVar1 * 4) =
             *(undefined4 *)(*(int *)(unaff_ESI + 0xac) + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(unaff_ESI + 0x44));
    }
  }
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0x44)) {
    do {
      *(undefined4 *)
       (*(int *)(unaff_ESI + 0x20) + *(int *)(*(int *)(unaff_ESI + 0x34) + iVar1 * 4) * 4) =
           *(undefined4 *)(*(int *)(unaff_ESI + 0x84) + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_ESI + 0x44));
  }
  *(undefined4 *)
   (*(int *)(unaff_ESI + 0x20) +
   *(int *)(*(int *)(unaff_ESI + 0x34) + *(int *)(unaff_ESI + 0x4c) * 4) * 4) = 0x3f800000;
  return uVar3;
}
