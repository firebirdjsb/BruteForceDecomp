/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABD37B37B75950A8F7E1AC70BC7F5F0D4476CE0AF93CFC60BE521F2C438A6050
 * Entry: 0x00171960, Ghidra index: 4861, label: FUN_00171960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00171960(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  param_2 = *(int *)(param_2 + 0x28);
  iVar3 = FUN_000120f0();
  if ((iVar3 != 0) && (*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x20c) + 0xc) != 0)) {
    iVar3 = FUN_000de9f0(*(int *)(param_1 + 0x20),uVar2);
    if (iVar3 != 0) {
      iVar3 = FUN_000120f0();
      if (((iVar3 != 0) && (param_2 != 0)) && (iVar1 != 0)) {
        uVar4 = FUN_000120f0();
        if ((-(uint)((*(byte *)(uVar4 + 0x26) & 0x40) != 0) & uVar4) != 0) {
          param_2 = FUN_002383b0();
          FUN_002383b0();
          puVar5 = &param_2;
          FUN_000120f0(puVar5);
          FUN_00115070(puVar5);
        }
      }
    }
    return 0;
  }
  return 0x80004001;
}
