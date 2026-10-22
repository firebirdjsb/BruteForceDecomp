/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CBBF9BFEBA2D80B5D47AE582CFEA72A69972A121F345F718F08C76E52CE6A45
 * Entry: 0x002ad0b0, Ghidra index: 9681, label: FUN_002ad0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ad0b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_EAX + 0x10);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(in_EAX + 0x10);
    *(undefined4 *)(in_EAX + 0x10) = *puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = *(int *)(in_EAX + 0x10);
  }
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  FUN_002ad850(local_4,**(undefined4 **)(in_EAX + 8),*(undefined4 **)(in_EAX + 8));
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 8));
}
