/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DC4BE11912F6E6181304DA20D4C1660BC9D9C0217D96927B98A22FB35A3ACA7
 * Entry: 0x0004ad70, Ghidra index: 602, label: FUN_0004ad70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004ad70(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_EAX + 8) - iVar1 >> 3) < (uint)(*(int *)(in_EAX + 0xc) - iVar1 >> 3))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_0004b6d0(iVar1,1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 8;
    return;
  }
  FUN_0004af50(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
