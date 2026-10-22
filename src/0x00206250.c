/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78ABD65205C696DD17444F7D89398E901AADFD4F879C20990753F5C363B0211E
 * Entry: 0x00206250, Ghidra index: 7296, label: FUN_00206250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00206250(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  iVar1 = *(int *)(in_ECX + 0x54);
  fVar2 = (float10)*(float *)(in_ECX + 0xa0);
  if ((((iVar1 != 3) && (iVar1 != 2)) && (iVar1 != 4)) && (iVar1 != 5)) {
    if (0.0 <= *(float *)(in_ECX + 0xa8)) {
      return (float10)*(float *)(in_ECX + 0xa8) * (float10)0.01;
    }
    fVar2 = (float10)2.0;
  }
  return fVar2;
}
