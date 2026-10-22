/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 657B86EB3F69AD621B91DA27D47A0F2E983E2D2F7FDE04370D77C2FC69CBC145
 * Entry: 0x000d0830, Ghidra index: 2578, label: FUN_000d0830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d0830(void)

{
  int *piVar1;
  int iVar2;
  uint in_EAX;
  int *piVar3;
  int *in_ECX;
  
  piVar3 = (int *)((in_EAX & 0xffff) * 0x10 + in_ECX[5]);
  piVar1 = (int *)piVar3[1];
  iVar2 = *piVar3;
  if (piVar1 == (int *)0x0) {
    *in_ECX = iVar2;
  }
  else {
    *piVar1 = iVar2;
  }
  if (iVar2 == 0) {
    in_ECX[1] = (int)piVar1;
  }
  else {
    *(int **)(iVar2 + 4) = piVar1;
  }
  piVar3[1] = 0;
  *piVar3 = 0;
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    *(undefined4 *)in_ECX[3] = piVar3;
    piVar3[1] = in_ECX[3];
    in_ECX[3] = (int)piVar3;
    return;
  }
  piVar3[1] = 0;
  in_ECX[2] = (int)piVar3;
  in_ECX[3] = (int)piVar3;
  return;
}
