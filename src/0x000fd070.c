/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A4706FD7155EA965DA6260CA208E8DC478962F089F2DA5283A090EE7D4C149B
 * Entry: 0x000fd070, Ghidra index: 3160, label: FUN_000fd070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000fd070(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar1 = *(int *)(in_EAX + 8);
  iVar4 = *(int *)(in_EAX + 4);
  local_4 = 0;
  if (iVar4 == iVar1) {
    return 0;
  }
  do {
    uVar2 = FUN_000fcfd0();
    iVar3 = FUN_000ff9e0(uVar2);
    if (iVar3 != -1) {
      FUN_000fbd40();
      local_4 = local_4 + 1;
    }
    iVar4 = iVar4 + 0x2c;
  } while (iVar4 != iVar1);
  return local_4;
}
