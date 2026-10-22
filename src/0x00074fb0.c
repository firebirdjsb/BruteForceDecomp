/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1ACDD4C45BBAAF3AB64D4A91D243D96889CA61569ABE43D00CA2CDC761B22026
 * Entry: 0x00074fb0, Ghidra index: 1339, label: FUN_00074fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00074fb0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_EDX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_EAX + 8) - iVar1 >> 2) < (uint)(*(int *)(in_EAX + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_0003efa0(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 4;
    return;
  }
  FUN_000753c0(*(undefined4 *)(in_EAX + 8),in_EDX);
  return;
}
