/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF10C3281CE4CA0337A399C671AEA4419C414BB29527EA990A644E279E8AACDA
 * Entry: 0x00270b70, Ghidra index: 8794, label: FUN_00270b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00270b70(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int unaff_ESI;
  
  piVar4 = param_3;
  puVar3 = param_1;
  piVar1 = *(int **)(unaff_ESI + 4);
  piVar2 = param_2;
  if ((param_2 == (int *)*piVar1) && (param_3 == piVar1)) {
    FUN_00270af0(piVar1[1]);
    *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *(undefined4 *)*(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_ESI + 4);
    *(int *)(*(int *)(unaff_ESI + 4) + 8) = *(int *)(unaff_ESI + 4);
    *puVar3 = **(undefined4 **)(unaff_ESI + 4);
    return puVar3;
  }
  while (piVar2 != piVar4) {
    param_2 = piVar2;
    FUN_00270df0();
    FUN_001f2440(unaff_ESI,&param_1,piVar2);
    piVar2 = param_2;
  }
  *puVar3 = piVar2;
  return puVar3;
}
