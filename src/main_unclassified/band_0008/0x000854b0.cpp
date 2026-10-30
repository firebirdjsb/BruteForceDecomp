/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 073006318DAB69FDCAB11277F498A00C7321763B335686C7F4BECEEB4428506C
 * Entry: 0x000854b0, Ghidra index: 1559, label: FUN_000854b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00086a60(int param_1,int param_2);

void FUN_000854b0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_ECX;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x3c) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x3c))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00086a60(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 0x3c;
    return;
  }
  FUN_000857a0(local_4,*(undefined4 *)(in_EAX + 8),in_ECX);
  return;
}
