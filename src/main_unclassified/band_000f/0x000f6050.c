/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBB18D47CCE19BF4C172381BEBAEEB3BA30360F8F468E771D01D029D6E17F494
 * Entry: 0x000f6050, Ghidra index: 3077, label: FUN_000f6050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000f6050(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  
  uVar1 = *param_1;
  if (uVar1 < 0x1ec4544a) {
    if (uVar1 == 0x1ec45449) {
      piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar3 + 4))(*(undefined4 *)(param_2 + 4));
      return 1;
    }
    if (uVar1 == 0x98e6d01) {
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1c8))(in_ECX + 0x10);
      if (param_1[1] != 0) {
        FUN_00100d10();
      }
      return 1;
    }
    if (uVar1 == 0x1021cbac) {
      piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar3 + 0x20))();
      return 1;
    }
    if (uVar1 == 0x19a2352e) {
      uVar2 = FUN_00101e10(param_2,in_ECX + 0xc);
      return uVar2;
    }
  }
  else {
    if (uVar1 == 0x1f926502) {
      uVar2 = FUN_000efb40();
      return uVar2;
    }
    if (uVar1 == 0xe3cedbb7) {
      FUN_000f3f70(in_ECX);
      FUN_000f3e30();
      return 1;
    }
    if (uVar1 == 0xf974b529) {
      FUN_000f3f70(in_ECX);
      FUN_001023b0(1);
      FUN_000f3e30();
      piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar3 + 0xc))(0,0,0);
      return 1;
    }
  }
  return 0;
}
