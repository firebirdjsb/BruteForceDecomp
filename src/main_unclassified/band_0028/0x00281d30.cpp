/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E93AA768F2F5D78E26B9BE0791D51A3F34CB156F86B314D4A262C0E5DFCB44ED
 * Entry: 0x00281d30, Ghidra index: 9056, label: FUN_00281d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00281d30(uint param_1)

{
  ushort uVar1;
  int in_EAX;
  ushort *in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)param_1 >> 1;
joined_r0x00281d40:
  do {
    while( true ) {
      if (iVar3 == 0) {
        return 0;
      }
      if (*(int *)(in_EAX + 0x2810) != 3) break;
      if (*(int *)(in_EAX + 0x2818) == 0x10) {
        iVar2 = FUN_00281bf0(&param_1);
        if (iVar2 == -1) {
          return 0x80004005;
        }
        *(uint *)(in_EAX + 0x2814) = param_1 & 0xffff;
        *(undefined4 *)(in_EAX + 0x2818) = 0;
      }
      uVar4 = 1 << ((byte)*(int *)(in_EAX + 0x2818) & 0x1f) & *(uint *)(in_EAX + 0x2814);
      *(int *)(in_EAX + 0x2818) = *(int *)(in_EAX + 0x2818) + 1;
      iVar2 = FUN_00281bf0(&param_1);
      if (iVar2 == -1) {
        return 0x80004005;
      }
      if (iVar2 == 1) {
        *(uint *)(in_EAX + 0x2814) = param_1 & 0xffff;
        uVar4 = param_1 & 1;
        *(undefined4 *)(in_EAX + 0x2818) = 1;
        iVar2 = FUN_00281bf0(&param_1);
        if (iVar2 == -1) {
          return 0x80004005;
        }
      }
      if (uVar4 == 0) {
        *(ushort *)(in_EAX + 4 + *(int *)(in_EAX + 0x2804) * 2) = (ushort)param_1;
        *(uint *)(in_EAX + 0x2804) = *(int *)(in_EAX + 0x2804) + 1U & 0x1ff;
        *(undefined4 *)(in_EAX + 0x280c) = 1;
        *in_ECX = (ushort)param_1;
        in_ECX = in_ECX + 1;
        iVar3 = iVar3 + -1;
        *(int *)(in_EAX + 0x284c) = *(int *)(in_EAX + 0x284c) + -1;
      }
      else {
        *(uint *)(in_EAX + 0x2808) = param_1 & 0x1ff;
        *(uint *)(in_EAX + 0x280c) = ((ushort)param_1 >> 9) + 2;
        *(undefined4 *)(in_EAX + 0x2810) = 4;
      }
    }
  } while (*(int *)(in_EAX + 0x2810) != 4);
  if (*(int *)(in_EAX + 0x280c) != 0) goto LAB_00281d70;
  goto LAB_00281ddf;
LAB_00281d70:
  do {
    if (iVar3 == 0) break;
    uVar4 = *(uint *)(in_EAX + 0x2808);
    *(uint *)(in_EAX + 0x2808) = uVar4 + 1;
    uVar1 = *(ushort *)(in_EAX + 4 + (uVar4 & 0x1ff) * 2);
    *(ushort *)(in_EAX + 4 + *(int *)(in_EAX + 0x2804) * 2) = uVar1;
    *in_ECX = uVar1;
    in_ECX = in_ECX + 1;
    iVar3 = iVar3 + -1;
    iVar2 = *(int *)(in_EAX + 0x280c) + -1;
    *(uint *)(in_EAX + 0x2804) = *(int *)(in_EAX + 0x2804) + 1U & 0x1ff;
    *(int *)(in_EAX + 0x284c) = *(int *)(in_EAX + 0x284c) + -1;
    *(int *)(in_EAX + 0x280c) = iVar2;
  } while (iVar2 != 0);
  if (*(int *)(in_EAX + 0x280c) == 0) {
LAB_00281ddf:
    *(undefined4 *)(in_EAX + 0x2810) = 3;
  }
  goto joined_r0x00281d40;
}
