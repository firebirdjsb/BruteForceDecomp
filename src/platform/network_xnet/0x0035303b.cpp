/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B5CD6000029ECCFB6D98E9CE04F8AEF00A383345D9A37DF52BA1F28024A0399
 * Entry: 0x0035303b, Ghidra index: 13075, label: FUN_0035303b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0035303b(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc4);
  iVar1 = *(int *)(param_1 + 200) + iVar3;
  if (-1 < param_2 - iVar3) {
    iVar3 = param_2;
  }
  *param_4 = iVar3;
  if (param_3 == iVar1 || param_3 - iVar1 < 0) {
    iVar1 = param_3;
  }
  *param_5 = iVar1;
  if ((*param_4 - iVar1 < 0) || ((*param_4 == iVar1 && (param_2 == param_3)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
