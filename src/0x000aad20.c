/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECE41E95A63CE39AA940D1BE81001FB94D2935B7CFF3D2402EA57863AF6C721A
 * Entry: 0x000aad20, Ghidra index: 2035, label: FUN_000aad20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000aad20(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(in_EAX + 0x28) + 8))();
  if (*(int *)(iVar1 + 0x28) != 0) {
    FUN_000a9910(0);
    return;
  }
  FUN_000a9910(0);
  return;
}
