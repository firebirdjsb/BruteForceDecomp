/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDAB65A698A9D45FDA12A40660D449CA75DEBDBCC4ED02C0DDB2E6FB36BE258B
 * Entry: 0x00183a90, Ghidra index: 5208, label: FUN_00183a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00183a90(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_EDX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_EAX + 8) - iVar1 >> 3) < (uint)(*(int *)(in_EAX + 0xc) - iVar1 >> 3))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00144b10(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 8;
    return;
  }
  FUN_001445d0(*(undefined4 *)(in_EAX + 8),in_EDX);
  return;
}
