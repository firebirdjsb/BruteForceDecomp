/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F16934FA75EF9CF1324CBB5368F2B7FE11D39CEC94FB54FB787CD3D3E3E4FAC6
 * Entry: 0x00371b60, Ghidra index: 13384, label: FUN_00371b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00371b60(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  int iVar3;
  int unaff_EDI;
  
  uVar1 = *(uint *)(in_ECX[0x5f0] + 0x44) | 0x80000000;
  if ((uVar1 < in_ECX[9]) || (in_ECX[10] <= uVar1)) {
    uVar1 = *(uint *)(in_ECX[0x13e] + 0x324c) & 0xfffffffe | 0x80000000;
  }
  if (uVar1 <= *in_ECX) {
    uVar1 = in_ECX[0x10] + uVar1;
  }
  uVar2 = *(uint *)(unaff_EDI + 4);
  if (uVar2 <= *in_ECX) {
    uVar2 = uVar2 + in_ECX[0x10];
  }
  if ((int)(uVar2 - uVar1) < 0) {
    return 0;
  }
  iVar3 = *(int *)(unaff_EDI + 8) - in_ECX[0x7f8];
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  return (uVar2 - uVar1) + iVar3;
}
