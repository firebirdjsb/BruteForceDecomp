/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6D069A6376E3BA26CA34FBE8D9D26AA81F27DBB47D04F98179E9579E910D5FF
 * Entry: 0x00107d10, Ghidra index: 3375, label: FUN_00107d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00107d10(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(in_EAX + 0x28);
  if (((uVar1 != 0) && (*(int *)(uVar1 + 0x1c) != 0)) &&
     (iVar2 = *(int *)(uVar1 + 0x20) - *(int *)(uVar1 + 0x1c),
     uVar1 = CONCAT31((int3)((ulonglong)((longlong)iVar2 * 0x6bca1af3) >> 8),1),
     1 < (uint)(iVar2 / 0x4c))) {
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}
