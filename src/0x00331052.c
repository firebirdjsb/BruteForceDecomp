/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29A3132FCEF1D778FE3A1E57BEF96EB9DEEDED1B2426E4C2757D8676309A7264
 * Entry: 0x00331052, Ghidra index: 12388, label: FUN_00331052
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00331052(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x660);
  if (iVar1 != 0) {
    FUN_00330c53(iVar1);
    *(int *)(in_ECX + 0x660) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x65c);
  if (iVar1 != 0) {
    FUN_0033c53d(iVar1);
    *(int *)(in_ECX + 0x65c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x664) = 8;
  return;
}
