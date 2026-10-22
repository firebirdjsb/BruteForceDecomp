/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1DB9704EB72BFFAB4572310A61FA9AA51EF01F6A05468DD38B50BBB45625C99
 * Entry: 0x0031c25e, Ghidra index: 12328, label: FUN_0031c25e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031c25e(int param_1,int *param_2)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  FUN_003118f0();
  piVar1 = (int *)FUN_003148cf(0x626f5344,0x30,1);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = param_1;
    piVar1[10] = 0x2000000;
    piVar1[2] = in_ECX;
  }
  *(int **)(in_ECX + param_1 * 4) = piVar1;
  iVar2 = (-(uint)(piVar1 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
  if ((-1 < iVar2) && (param_2 != (int *)0x0)) {
    *param_2 = (int)piVar1;
  }
  FUN_00311923();
  return iVar2;
}
