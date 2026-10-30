/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3491CE5369907B5801871B80D763E8F1E722DAF4F928CA58B5956C2748F62593
 * Entry: 0x00354f4a, Ghidra index: 13116, label: FUN_00354f4a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00354f4a(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  
  iVar2 = FUN_0035308e(param_5,param_6,&param_6);
  uVar5 = 0;
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0035399f(param_1);
    if (piVar3 != (int *)0x0) {
      *(undefined1 *)(piVar3 + 0x1f) = 3;
      uVar4 = *param_2;
      uVar4 = (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8 | (uVar4 & 0xff00 | uVar4 << 0x10) << 8;
      piVar3[0x30] = uVar4;
      piVar3[0x31] = uVar4 + 1;
      piVar3[0x2f] = param_6;
      iVar2 = FUN_00354d01(piVar3,param_3,param_4,1);
      if (iVar2 < 0) {
        FUN_00346cd5(piVar3,1);
      }
      else {
        puVar1 = *(undefined4 **)(in_ECX + 0xbdc);
        *piVar3 = in_ECX + 0xbd8;
        piVar3[1] = (int)puVar1;
        *puVar1 = piVar3;
        *(int **)(in_ECX + 0xbdc) = piVar3;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}
