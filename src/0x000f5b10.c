/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCE233FBB62A94533A9BDD8E3B09C09536C2CC5F8F16F3BCA797F4C0676B6139
 * Entry: 0x000f5b10, Ghidra index: 3076, label: FUN_000f5b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_000f5b10(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  bool bVar5;
  undefined4 uStack_4;
  
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
  iVar1 = *piVar3;
  iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
  uVar2 = *(uint *)(unaff_ESI + 0x234);
  iVar4 = *(int *)(iVar4 + 4);
  bVar5 = iVar4 != (int)(uVar2 << 6) >> 0x18;
  *(uint *)(unaff_ESI + 0x234) = (uint)CONCAT11((char)iVar4,(char)iVar1) << 10 | uVar2 & 0xfc0003ff;
  if (iVar1 == (int)(uVar2 << 0xe) >> 0x18) {
    if (bVar5) {
      uStack_4 = 0xe4b87e3e;
      FUN_000f42d0(unaff_ESI,&uStack_4);
      return;
    }
    FUN_000f42d0(unaff_ESI,&DAT_0046d064);
    return;
  }
  if (bVar5) {
    uStack_4 = 0x1f93ecb3;
    FUN_000f42d0(unaff_ESI,&uStack_4);
    return;
  }
  uStack_4 = 0x1dc05993;
  FUN_000f42d0(unaff_ESI,&uStack_4);
  return;
}
