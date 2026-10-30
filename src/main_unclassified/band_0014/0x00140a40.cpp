/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08B7144EC5371DB37820CEFEBF4CE2D46FCBF3E39B14CF9326DFD192DC219CB3
 * Entry: 0x00140a40, Ghidra index: 4088, label: FUN_00140a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00140a40(int param_1)

{
  int iVar1;
  int in_EAX;
  uint3 uVar2;
  
  iVar1 = *(int *)(in_EAX + 4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (param_1 <= *(int *)(iVar1 + 8))) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}
