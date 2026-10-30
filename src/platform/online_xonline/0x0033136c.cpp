/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0CCC4A0FB70E798B0B90BBDBA3E7DAD2B93AB1BA0EB07FB012F2604F01F1AF4
 * Entry: 0x0033136c, Ghidra index: 12392, label: FUN_0033136c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033136c(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x14);
  if (*(int *)(param_1 + 0xc) == 0) {
    if (piVar2 == (int *)0x0) {
      uVar3 = *(uint *)(iVar1 + 0x18);
      if (uVar3 < 4) {
        if (uVar3 == 2) {
          *(undefined4 *)(param_1 + 0xc) = 0x80151904;
        }
        else if (uVar3 == 3) {
          *(undefined4 *)(param_1 + 0xc) = 0x80151903;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0x1500f0;
      }
    }
    else {
      iVar4 = *piVar2;
      if (iVar4 != 0x2734) {
        if (iVar4 == 0) {
          piVar5 = piVar2;
          piVar6 = (int *)(iVar1 + 0x1c);
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar6 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          }
          *(undefined4 *)(iVar1 + 0x18) = 4;
          *(undefined4 *)(param_1 + 0xc) = 0x1500f0;
        }
        else if (iVar4 == 0x274c) {
          *(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x34) = 0x274c;
          *(undefined4 *)(iVar1 + 0x18) = 2;
          *(undefined4 *)(param_1 + 0xc) = 0x80151904;
        }
        else {
          *(int *)(*(int *)(in_ECX + 0xb8) + 0x34) = iVar4;
          *(undefined4 *)(iVar1 + 0x18) = 3;
          *(undefined4 *)(param_1 + 0xc) = 0x80151903;
        }
        *(undefined4 *)(param_1 + 0x14) = 0;
        FUN_00345049(piVar2);
      }
    }
  }
  return *(undefined4 *)(param_1 + 0xc);
}
