/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 512550DA1732AD47DF493B1DC09900B76FCA945BD4B8A918A91CEE0FC5FF9466
 * Entry: 0x00057d90, Ghidra index: 857, label: FUN_00057d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00057d90(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  
  iVar2 = param_2;
  FUN_000582a0(&param_2,param_2 + 0x1c,*(undefined4 *)(unaff_EBX + 8),param_2,param_2);
  puVar1 = *(undefined4 **)(unaff_EBX + 8);
  for (puVar3 = puVar1 + -7; puVar3 != puVar1; puVar3 = puVar3 + 7) {
    (**(code **)*puVar3)(0);
  }
  *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + -0x1c;
  *param_1 = iVar2;
  return;
}
