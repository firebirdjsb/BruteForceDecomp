/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9653C212B156FD2EE2401A32ABDA160F4A90E8B2EAC1EE0EF7F63926CFA1B871
 * Entry: 0x000fa560, Ghidra index: 3128, label: FUN_000fa560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046d31c;
int FUN_000fa560(void)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *local_10 [2];
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  if (in_EAX != 0) {
    cVar1 = *(char *)((int)DAT_0046d31c[1] + 0x15);
    puVar3 = (undefined4 *)DAT_0046d31c[1];
    local_10[0] = DAT_0046d31c;
    while (puVar7 = puVar3, cVar1 == '\0') {
      if ((uint)puVar7[3] < in_EAX) {
        puVar3 = (undefined4 *)puVar7[2];
        puVar7 = local_10[0];
      }
      else {
        puVar3 = (undefined4 *)*puVar7;
      }
      cVar1 = *(char *)((int)puVar3 + 0x15);
      local_10[0] = puVar7;
    }
    if ((local_10[0] == DAT_0046d31c) || (in_EAX < (uint)local_10[0][3])) {
      local_8 = DAT_0046d31c;
      ppuVar4 = &local_8;
    }
    else {
      ppuVar4 = local_10;
    }
    if (DAT_0046d31c == *ppuVar4) {
      iVar2 = FUN_002ea01d(0xc);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        uVar5 = FUN_001fad20(iVar2);
        *(undefined4 *)(iVar2 + 4) = uVar5;
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      local_4 = 0;
      piVar6 = (int *)FUN_00135410(&local_8);
      *(int *)(*piVar6 + 0x10) = iVar2;
      return iVar2;
    }
    iVar2 = (*ppuVar4)[4];
  }
  return iVar2;
}
