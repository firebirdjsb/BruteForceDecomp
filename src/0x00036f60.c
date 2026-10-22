/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0A2565F78C14EDEB79972856EF0F5FB43CDE538635EE64F02FE583DE12B194A
 * Entry: 0x00036f60, Ghidra index: 363, label: FUN_00036f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00036f60(void)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int in_ECX;
  
  piVar3 = (int *)FUN_000120f0();
  cVar1 = (**(code **)(*(int *)piVar3[0x169] + 0x118))();
  if (cVar1 != '\0') {
    (**(code **)(*piVar3 + 0x15c))(8,0);
    return 2;
  }
  cVar1 = (**(code **)(*(int *)piVar3[0x169] + 0x11c))();
  if ((cVar1 == '\0') || ((piVar3[0x7e] != 6 && (piVar3[0x7e] != 7)))) {
    if (((*(byte *)(piVar3[0x169] + 0x1c) & 1) == 0) || (*(int *)(piVar3[0x169] + 0x18) == 0)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    if (((byte)(*(uint *)(in_ECX + 900) >> 6) & 1) != bVar2) {
      return 2;
    }
    (**(code **)(*piVar3 + 0x15c))(8,0);
  }
  return 1;
}
