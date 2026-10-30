/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60786FF8C2B1BAC6A7EC6E4A575A60E9A5C95B1C7F4B9DDEE11C5107A11B4898
 * Entry: 0x002639a0, Ghidra index: 8687, label: FUN_002639a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002639a0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_ECX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_EAX + 8) - iVar1 >> 3) < (uint)(*(int *)(in_EAX + 0xc) - iVar1 >> 3))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00264190(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 8;
    return;
  }
  FUN_00263cc0(*(undefined4 *)(in_EAX + 8),in_ECX);
  return;
}
