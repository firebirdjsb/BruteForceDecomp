/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54FD0202000DFFCC45A70F19279F2A6CC3C5AA25C8BB442615F3FFE5AA62945F
 * Entry: 0x00078e60, Ghidra index: 1438, label: FUN_00078e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
extern uint32_t UNK_00078ee0;
void FUN_00078e60(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 local_1c [7];
  
  local_1c[3] = 0;
  *unaff_ESI = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[1] = 0;
  puVar1 = local_1c;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_1c[0] = 0xf6551df5;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  uVar2 = (**(code **)*puVar1)(local_1c);
  iVar4 = DAT_00469b58;
  unaff_ESI[2] = uVar2;
  piVar3 = (int *)(**(code **)(**(int **)(iVar4 + 8) + 0x78))();
  (**(code **)(*piVar3 + 8))(&DAT_0046d064,0,0);
  DAT_004698d4 = &UNK_00078ee0;
  DAT_004698d8 = unaff_ESI;
  return;
}
