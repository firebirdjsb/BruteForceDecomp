/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCC751EEC45EB372EF65FB86D9BA7AAB04C9799E6BCBC738C176D11AF7890426
 * Entry: 0x00130b20, Ghidra index: 3829, label: FUN_00130b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00130b20(void)

{
  int in_EAX;
  undefined1 *puVar1;
  undefined4 uVar2;
  int in_EDX;
  int iVar3;
  
  puVar1 = (undefined1 *)(in_EAX + 0x315);
  iVar3 = 9;
  do {
    puVar1[-9] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar2 = 1;
  *(undefined1 *)(*(int *)(in_EDX + 0x364) + 0x30c + in_EAX) = 1;
  *(undefined1 *)(*(int *)(in_EDX + 0x36c) + 0x315 + in_EAX) = 1;
  *(undefined1 *)(*(int *)(in_EDX + 0x368) + 0x30c + in_EAX) = 1;
  *(undefined1 *)(*(int *)(in_EDX + 0x370) + 0x315 + in_EAX) = 1;
  iVar3 = *(int *)(in_EDX + 0x374);
  *(int *)(in_EAX + 0x15c) = iVar3;
  if ((iVar3 != 0) && (iVar3 != 4)) {
    uVar2 = 2;
  }
  *(undefined4 *)(in_EAX + 0x160) = uVar2;
  return;
}
