/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBF7BB8AE3116816D9FA1409C0EA50BD588B38340CBDA330F8906EE812B6A2A7
 * Entry: 0x002db430, Ghidra index: 10281, label: FUN_002db430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002db430(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 extraout_EDX;
  int unaff_EBX;
  
  *(uint *)(unaff_EBX + 0x48) = in_EAX + 3U & 0xfffffffc;
  *(int *)(unaff_EBX + 0x44) = in_EAX;
  *(int *)(unaff_EBX + 0x4c) = in_EAX;
  *(int *)(unaff_EBX + 0x94) = in_EAX;
  iVar2 = 0;
  if (0 < *(int *)(unaff_EBX + 0x40)) {
    do {
      *(undefined4 *)(*(int *)(unaff_EBX + 0x2c) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_EBX + 0x40));
  }
  iVar2 = FUN_002db280();
  if (iVar2 == 1) {
    *(undefined4 *)(unaff_EBX + 0x68) = 0;
    while( true ) {
      iVar2 = *(int *)(unaff_EBX + 0x94) + -1;
      while (-1 < iVar2) {
        iVar2 = iVar2 + -1;
        *(undefined4 *)(*(int *)(unaff_EBX + 0x8c) + 4 + iVar2 * 4) =
             *(undefined4 *)(*(int *)(unaff_EBX + 0x80) + 4 + iVar2 * 4);
      }
      FUN_002dbf80();
      FUN_002dbfd0();
      iVar2 = 0;
      if (0 < *(int *)(unaff_EBX + 0x44)) {
        do {
          *(undefined4 *)
           (*(int *)(unaff_EBX + 0x2c) + *(int *)(*(int *)(unaff_EBX + 0x34) + iVar2 * 4) * 4) =
               *(undefined4 *)(*(int *)(unaff_EBX + 0x84) + iVar2 * 4);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_EBX + 0x44));
      }
      FUN_002db390();
      iVar2 = *(int *)(unaff_EBX + 0x44);
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) {
          return;
        }
        iVar1 = *(int *)(*(int *)(unaff_EBX + 0x34) + iVar2 * 4);
      } while (0.0 <= *(float *)(*(int *)(unaff_EBX + 0x1c) + iVar1 * 4));
      *(undefined4 *)(*(int *)(unaff_EBX + 0x1c) + iVar1 * 4) = 0;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x2c) + iVar1 * 4) = 0;
      *(int *)(unaff_EBX + 0x44) = *(int *)(unaff_EBX + 0x44) + -1;
      *(int *)(unaff_EBX + 0x4c) = *(int *)(unaff_EBX + 0x4c) + -1;
      FUN_002dafb0();
      FUN_002da8e0(extraout_EDX);
      if (0 < *(int *)(unaff_EBX + 0x68)) break;
      iVar2 = 0;
      if (0 < *(int *)(unaff_EBX + 0x44)) {
        do {
          *(undefined4 *)(*(int *)(unaff_EBX + 0x80) + iVar2 * 4) =
               *(undefined4 *)
                (*(int *)(unaff_EBX + 0x14) + *(int *)(*(int *)(unaff_EBX + 0x34) + iVar2 * 4) * 4);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_EBX + 0x44));
      }
    }
    iVar2 = 0;
    if (0 < *(int *)(unaff_EBX + 0x3c)) {
      do {
        *(undefined4 *)(*(int *)(unaff_EBX + 0x24) + iVar2 * 4) = 0;
        *(undefined4 *)(*(int *)(unaff_EBX + 0x1c) + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_EBX + 0x3c));
    }
  }
  *(undefined4 *)(unaff_EBX + 0x44) = 0;
  *(undefined4 *)(unaff_EBX + 0x4c) = 0;
  *(undefined4 *)(unaff_EBX + 0x94) = 0;
  return;
}
