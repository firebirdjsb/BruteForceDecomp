/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14B398BC000F1A33E2B503F3C17027CFF4FB428B19CEAA4B7ECD4D480CBE6977
 * Entry: 0x00383a75, Ghidra index: 13629, label: FUN_00383a75
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00383a75(undefined4 param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 < 0xd) {
    if (bVar1 == 0xc) {
      uVar2 = FUN_00385abc();
      goto LAB_00383b6e;
    }
    if (bVar1 == 2) {
      uVar2 = FUN_003835b2();
      goto LAB_00383b6e;
    }
    if (bVar1 == 4) {
      uVar2 = FUN_00383726();
      goto LAB_00383b6e;
    }
    if (bVar1 == 5) {
      uVar2 = FUN_00383747();
      goto LAB_00383b6e;
    }
    if (bVar1 == 7) {
      uVar3 = FUN_00384f75();
      *(undefined4 *)(param_2 + 0x14) = uVar3;
      uVar2 = 0;
      goto LAB_00383b6e;
    }
    if (bVar1 == 9) {
      uVar2 = FUN_003856db();
      goto LAB_00383b6e;
    }
    if (bVar1 == 0xb) {
      uVar2 = FUN_00385955();
      goto LAB_00383b6e;
    }
  }
  else {
    if (bVar1 == 0xd) {
      uVar2 = FUN_00385bdb();
      goto LAB_00383b6e;
    }
    if (0x3f < bVar1) {
      if (bVar1 < 0x42) {
        uVar2 = FUN_00386286();
        goto LAB_00383b6e;
      }
      if (bVar1 == 0x43) {
        uVar2 = FUN_003839bb();
        goto LAB_00383b6e;
      }
      if (bVar1 == 0x46) {
        uVar2 = FUN_00383a22();
        goto LAB_00383b6e;
      }
      if (bVar1 == 0x4a) {
        uVar2 = FUN_00385888();
        goto LAB_00383b6e;
      }
    }
  }
  uVar2 = 0x80000200;
LAB_00383b6e:
  if ((uVar2 & 0xc0000000) != 0x40000000) {
    *(uint *)(param_2 + 4) = uVar2;
    FUN_00380eda(param_2);
  }
  return uVar2;
}
