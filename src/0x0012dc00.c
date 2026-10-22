/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6600049C1799C535A156FE10F677954E6F638AE9C2BE5C04CABEA484380CA75F
 * Entry: 0x0012dc00, Ghidra index: 3803, label: FUN_0012dc00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012dc00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  byte *unaff_EBX;
  int *piVar2;
  int local_2c [6];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_4;
  
  piVar2 = local_2c;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  FUN_000dddd0(*(undefined4 *)(in_EAX + 8),param_3,param_2,in_EAX);
  if (local_2c[0] == 2) {
    unaff_EBX[1] = 1;
    if (*(int *)(unaff_EBX + 0xc) != local_2c[1]) {
      FUN_0008f6a0(local_2c[1]);
    }
    if (*(int *)(*(int *)(unaff_EBX + 0xc) + 0x44) == 3) {
      *unaff_EBX = *unaff_EBX ^ (*unaff_EBX ^ (byte)local_4) & 1;
    }
    else {
      *unaff_EBX = *unaff_EBX ^ (*(int *)(*(int *)(unaff_EBX + 0xc) + 0x44) == 1 ^ *unaff_EBX) & 1;
    }
  }
  else {
    unaff_EBX[1] = 2;
    if (*(int *)(unaff_EBX + 0xc) != 0) {
      FUN_0008f6a0(0);
    }
    *unaff_EBX = *unaff_EBX ^ (*unaff_EBX ^ (byte)local_4) & 1;
  }
  *(uint *)(unaff_EBX + 4) = local_4 >> 2 & 0x1f;
  *unaff_EBX = *unaff_EBX ^ ((char)(local_4 >> 1) << 1 ^ *unaff_EBX) & 2;
  if (local_2c[0] == 0) {
    unaff_EBX[1] = 0;
    if (*(int *)(unaff_EBX + 0xc) != 0) {
      FUN_0008f6a0(0);
    }
    *unaff_EBX = *unaff_EBX & 0xfd;
    return;
  }
  *(undefined4 *)(unaff_EBX + 0x10) = local_14;
  *(undefined4 *)(unaff_EBX + 0x14) = local_10;
  *(undefined4 *)(unaff_EBX + 0x18) = local_c;
  return;
}
