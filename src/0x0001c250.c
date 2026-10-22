/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F5AF588B3747A60AB41FB605FDCB881DBCF2ACC4FD0881D27FCE98440E94BF9
 * Entry: 0x0001c250, Ghidra index: 103, label: FUN_0001c250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001c250(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 6;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 6;
    }
    FUN_0001c980(*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
    return;
  }
  if ((iVar2 != 0) && (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 6))) {
    FUN_0001c930(in_ECX,&stack0x00000004,in_EAX * 0x40 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
  }
  return;
}
