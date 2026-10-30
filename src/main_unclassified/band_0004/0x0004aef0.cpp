/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F10B15A1B36A6DBBD7B0C00F0AD1ECD219C970D583B69BC712060049B609A7FD
 * Entry: 0x0004aef0, Ghidra index: 604, label: FUN_0004aef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0028e4a0(int param_1,int param_2);
extern void FUN_0004afa0(int param_1);

void FUN_0004aef0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_ECX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_EAX + 8) - iVar1 >> 4) < (uint)(*(int *)(in_EAX + 0xc) - iVar1 >> 4))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_0028e4a0(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 0x10;
    return;
  }
  FUN_0004afa0(*(undefined4 *)(in_EAX + 8),in_ECX);
  return;
}
