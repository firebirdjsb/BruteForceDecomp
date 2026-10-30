/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D978449D28C188C92907FA968E38E1C72EE46C7FE9F7A4673CB1A4F02876254C
 * Entry: 0x00143f20, Ghidra index: 4150, label: FUN_00143f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00143f20(void)

{
  int iVar1;
  undefined4 in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_ECX + 8) - iVar1 >> 4) < (uint)(*(int *)(in_ECX + 0xc) - iVar1 >> 4))) {
    iVar1 = *(int *)(in_ECX + 8);
    FUN_00144a40(iVar1,1);
    *(int *)(in_ECX + 8) = iVar1 + 0x10;
    return;
  }
  FUN_00143f90(*(undefined4 *)(in_ECX + 8),in_EAX);
  return;
}
