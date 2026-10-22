/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCD9AF32899D278E98261A40E5713821AC160659AA3E04C325C7C06DC6544370
 * Entry: 0x00164ed0, Ghidra index: 4691, label: FUN_00164ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164ed0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EAX;
  int in_ECX;
  int iVar4;
  int in_EDX;
  
  while( true ) {
    iVar4 = in_EAX * 2 + 2;
    if (in_ECX <= iVar4) break;
    if (*(int *)(in_EDX + iVar4 * 0x14) < *(int *)(in_EDX + -0x14 + iVar4 * 0x14)) {
      iVar4 = in_EAX * 2 + 1;
    }
    iVar1 = in_EDX + iVar4 * 0x14;
    *(undefined4 *)(in_EDX + in_EAX * 0x14) = *(undefined4 *)(in_EDX + iVar4 * 0x14);
    iVar2 = in_EDX + in_EAX * 0x14;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    in_EAX = iVar4;
  }
  if (iVar4 == in_ECX) {
    puVar3 = (undefined4 *)(in_EDX + in_EAX * 0x14);
    iVar4 = in_EDX + -0x14 + in_ECX * 0x14;
    *puVar3 = *(undefined4 *)(in_EDX + -0x14 + in_ECX * 0x14);
    puVar3[1] = *(undefined4 *)(iVar4 + 4);
    puVar3[2] = *(undefined4 *)(iVar4 + 8);
    puVar3[3] = *(undefined4 *)(iVar4 + 0xc);
    puVar3[4] = *(undefined4 *)(iVar4 + 0x10);
  }
  FUN_00165630();
  return;
}
