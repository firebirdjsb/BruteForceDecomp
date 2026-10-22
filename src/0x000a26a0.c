/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32B85A5B8F56A2ED38F964342A2140001AD5947874DD3F31E230E3B250682C26
 * Entry: 0x000a26a0, Ghidra index: 1924, label: FUN_000a26a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
int FUN_000a26a0(void)

{
  char cVar1;
  uint uVar2;
  uint *in_EAX;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  int in_ECX;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *local_8;
  undefined4 *local_4;
  
  uVar2 = *in_EAX;
  if (uVar2 == DAT_0046d064) {
    return 0;
  }
  piVar7 = *(int **)(in_ECX + 8);
  while( true ) {
    if (piVar7 == *(int **)(in_ECX + 0xc)) {
      return 0;
    }
    local_4 = *(undefined4 **)(*piVar7 + 0x10c);
    iVar6 = 0;
    cVar1 = *(char *)((int)local_4[1] + 0x15);
    local_8 = local_4;
    puVar5 = (undefined4 *)local_4[1];
    while (cVar1 == '\0') {
      if ((uint)puVar5[3] < uVar2) {
        puVar3 = (undefined4 *)puVar5[2];
        puVar5 = local_8;
      }
      else {
        puVar3 = (undefined4 *)*puVar5;
      }
      local_8 = puVar5;
      puVar5 = puVar3;
      cVar1 = *(char *)((int)puVar3 + 0x15);
    }
    if ((local_8 == local_4) || (uVar2 < (uint)local_8[3])) {
      ppuVar4 = &local_4;
    }
    else {
      ppuVar4 = &local_8;
    }
    if (*ppuVar4 != *(undefined4 **)(*piVar7 + 0x10c)) {
      iVar6 = (*ppuVar4)[4];
    }
    if (iVar6 != 0) break;
    piVar7 = piVar7 + 1;
  }
  return iVar6;
}
