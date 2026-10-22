/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7AB8DBA6406CCC526FB1C42A81BC9D706EE2F8998D1FB8EAC51301F9BFA893A
 * Entry: 0x00285780, Ghidra index: 9076, label: FUN_00285780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ba968;
extern uint32_t PTR_FUN_00391608;
void FUN_00285780(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *unaff_EBX = &PTR_FUN_00391608;
  uVar1 = FUN_00061500(unaff_EBX + 4);
  unaff_EBX[5] = uVar1;
  unaff_EBX[6] = 0;
  unaff_EBX[1] = 0x30001;
  unaff_EBX[2] = 0;
  unaff_EBX[3] = 0;
  puVar2 = (undefined4 *)MmAllocateContiguousMemoryEx(0x400,0,0x7ffffff,0x40,0x404);
  puVar5 = &DAT_003ba968;
  puVar6 = puVar2;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar4 = unaff_EBX[2] + (int)puVar2;
  if ((unaff_EBX[1] & 0x70000) != 0x20000) {
    uVar4 = uVar4 & 0xfffffff;
  }
  unaff_EBX[2] = uVar4;
  return;
}
