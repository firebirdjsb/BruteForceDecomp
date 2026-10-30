/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE9BF76038448EFBE8D4971BFE7973A44167D89EBC14227FACD053D88BA298FC
 * Entry: 0x002db5a0, Ghidra index: 10282, label: FUN_002db5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002db5a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  do {
    *(undefined4 *)(unaff_ESI + 0x94) = *(undefined4 *)(unaff_ESI + 0x44);
    iVar2 = 0;
    if (0 < *(int *)(unaff_ESI + 0x40)) {
      do {
        *(undefined4 *)(*(int *)(unaff_ESI + 0x2c) + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_ESI + 0x40));
    }
    FUN_002da9c0();
    iVar2 = FUN_002db280();
    if (iVar2 == 1) {
      *(undefined4 *)(unaff_ESI + 0x68) = 0;
      iVar2 = *(int *)(unaff_ESI + 0x94) + -1;
      while (-1 < iVar2) {
        iVar2 = iVar2 + -1;
        *(undefined4 *)(*(int *)(unaff_ESI + 0x8c) + 4 + iVar2 * 4) =
             *(undefined4 *)(*(int *)(unaff_ESI + 0x80) + 4 + iVar2 * 4);
      }
      FUN_002dbf80();
      FUN_002dbfd0();
      iVar2 = 0;
      if (0 < *(int *)(unaff_ESI + 0x44)) {
        do {
          *(undefined4 *)
           (*(int *)(unaff_ESI + 0x2c) + *(int *)(*(int *)(unaff_ESI + 0x34) + iVar2 * 4) * 4) =
               *(undefined4 *)(*(int *)(unaff_ESI + 0x84) + iVar2 * 4);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_ESI + 0x44));
      }
    }
    else {
      *(undefined4 *)(unaff_ESI + 0x68) = 2;
      FUN_002db300();
      FUN_002da9c0();
      *(int *)(unaff_ESI + 0x9c) = *(int *)(unaff_ESI + 0x44);
      *(uint *)(unaff_ESI + 0xa0) = *(int *)(unaff_ESI + 0x44) + 3U & 0xfffffffc;
      iVar2 = 0;
      if (0 < *(int *)(unaff_ESI + 0x44)) {
        do {
          iVar1 = *(int *)(*(int *)(unaff_ESI + 0x34) + iVar2 * 4);
          *(undefined4 *)(*(int *)(unaff_ESI + 0xa8) + iVar2 * 4) =
               *(undefined4 *)(*(int *)(unaff_ESI + 0x14) + iVar1 * 4);
          iVar3 = 0;
          if (0 < *(int *)(unaff_ESI + 0x44)) {
            do {
              *(undefined4 *)
               (*(int *)(unaff_ESI + 0xa4) + (*(int *)(unaff_ESI + 0xa0) * iVar2 + iVar3) * 4) =
                   *(undefined4 *)
                    (*(int *)(unaff_ESI + 0x10) +
                    (*(int *)(unaff_ESI + 0x40) * iVar1 +
                    *(int *)(*(int *)(unaff_ESI + 0x34) + iVar3 * 4)) * 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(unaff_ESI + 0x44));
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_ESI + 0x44));
      }
      FUN_002d9e70(unaff_ESI + 0x98);
      iVar2 = FUN_002d9fb0();
      if (iVar2 != 1) {
        return iVar2;
      }
      iVar2 = 0;
      if (0 < *(int *)(unaff_ESI + 0x44)) {
        do {
          *(undefined4 *)
           (*(int *)(unaff_ESI + 0x2c) + *(int *)(*(int *)(unaff_ESI + 0x34) + iVar2 * 4) * 4) =
               *(undefined4 *)(*(int *)(unaff_ESI + 0xac) + iVar2 * 4);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_ESI + 0x44));
      }
    }
    FUN_002db390();
    iVar2 = FUN_002db780();
    if (iVar2 < 1) {
      return 1;
    }
  } while( true );
}
