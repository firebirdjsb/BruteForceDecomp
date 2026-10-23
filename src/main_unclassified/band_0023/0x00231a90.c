/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E8EB91203AB00D33B0308558CC5A0FAA404E042EAAB715CAB1DCFDBB6BC96F3
 * Entry: 0x00231a90, Ghidra index: 7756, label: FUN_00231a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00231a90(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  
  if ((*(byte *)(unaff_EBX + 0x224) & 0x10) != 0) {
    iVar1 = *(int *)(unaff_EBX + 0x228);
    if ((((*(int *)(iVar1 + 0x168) != DAT_0046d064) && (*(int *)(iVar1 + 0x168) != DAT_0046d064)) &&
        (*(int *)(*(int *)(iVar1 + 0x154) + *(int *)(unaff_EBX + 0x200) * 4) != 0)) &&
       (piVar2 = (int *)FUN_000da800(), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xdc))();
      *(byte *)(piVar2 + 0x43) = *(byte *)(piVar2 + 0x43) | 2;
      FUN_0021c380(0x3f800000);
    }
  }
  return;
}
