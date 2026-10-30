/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47A67C1D5A5F2E038A4D8F3B7060E3FAD41909015D3DDAFBD2B99F092D7FC4DF
 * Entry: 0x002944b0, Ghidra index: 9288, label: FUN_002944b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9768;
void FUN_002944b0(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *unaff_EBX;
  undefined4 *puVar5;
  int local_4;
  
  uVar2 = FUN_00294440();
  puVar3 = (undefined4 *)FUN_00294b90(0,uVar2 * 4);
  uVar4 = uVar2;
  puVar5 = puVar3;
  if (0 < (int)uVar2) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  unaff_EBX[1] = 0;
  local_4 = 0;
  if (0 < (int)*unaff_EBX) {
    do {
      puVar1 = *(undefined **)(unaff_EBX[2] + local_4 * 4);
      if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_003b9768)) {
        uVar4 = *(uint *)(puVar1 + 8) % uVar2;
        if (puVar3[uVar4] != 0) {
          do {
            uVar4 = uVar4 + (uVar2 - 2 & *(uint *)(puVar1 + 8)) + 1;
            if ((int)uVar2 <= (int)uVar4) {
              uVar4 = uVar4 - uVar2;
            }
          } while (puVar3[uVar4] != 0);
        }
        puVar3[uVar4] = puVar1;
        unaff_EBX[1] = unaff_EBX[1] + 1;
      }
      local_4 = local_4 + 1;
    } while (local_4 < (int)*unaff_EBX);
  }
  FUN_00294b90(unaff_EBX[2],0);
  *unaff_EBX = uVar2;
  unaff_EBX[2] = (uint)puVar3;
  return;
}
