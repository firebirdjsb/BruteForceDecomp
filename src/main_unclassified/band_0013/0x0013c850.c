/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F6D86B3DB2089722E7FA7D346CC712CA7EB3B14FC8D802F6C8B2B7528295BF6
 * Entry: 0x0013c850, Ghidra index: 4007, label: FUN_0013c850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_0046d064;
void FUN_0013c850(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(in_EAX + 0x18);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  iVar3 = (**(code **)(*DAT_00469b54 + 0x48))();
  if (((*(int *)(iVar2 + 0x370) != DAT_0046d064) && (*(int *)(iVar3 + 0x374) != 0)) && (iVar1 != 0))
  {
    piVar4 = (int *)FUN_000da800();
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xdc))(iVar1,(int *)(iVar3 + 0x374));
      *(byte *)(piVar4 + 0x43) = *(byte *)(piVar4 + 0x43) | 2;
      FUN_0021c380(0x3f800000);
    }
  }
  return;
}
