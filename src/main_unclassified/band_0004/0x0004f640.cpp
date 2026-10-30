/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53A0E7D293276C667132696A8979DDA1FD9D84C3A2B54A42F4C9F6E9FA4E4E3E
 * Entry: 0x0004f640, Ghidra index: 689, label: FUN_0004f640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004f640(void)

{
  int iVar1;
  undefined4 in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_ECX + 8) - iVar1 >> 7) < (uint)(*(int *)(in_ECX + 0xc) - iVar1 >> 7))) {
    iVar1 = *(int *)(in_ECX + 8);
    FUN_00050c70(iVar1,1);
    *(int *)(in_ECX + 8) = iVar1 + 0x80;
    return;
  }
  FUN_0004f8d0(*(undefined4 *)(in_ECX + 8),in_EAX);
  return;
}
