/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19870FB6E88A78D11B4F8EB29B18B983906F152DE4861077458B2535790493F6
 * Entry: 0x0020c010, Ghidra index: 7346, label: FUN_0020c010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c010(void)

{
  int iVar1;
  undefined4 in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_ECX + 8) - iVar1 >> 5) < (uint)(*(int *)(in_ECX + 0xc) - iVar1 >> 5))) {
    iVar1 = *(int *)(in_ECX + 8);
    FUN_001dc490(iVar1,1);
    *(int *)(in_ECX + 8) = iVar1 + 0x20;
    return;
  }
  FUN_0020c5d0(*(undefined4 *)(in_ECX + 8),in_EAX);
  return;
}
