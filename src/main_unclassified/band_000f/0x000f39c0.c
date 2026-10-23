/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D973B6C8C0D33BE041B0715BB3E0AEDBB683B28CB24E959A6EA9CDB9D3F580C1
 * Entry: 0x000f39c0, Ghidra index: 3045, label: FUN_000f39c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t *DAT_00469ab4;
extern uint32_t DAT_00469b58;
void FUN_000f39c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_410;
  int iStack_40c;
  undefined4 uStack_408;
  int iStack_404;
  undefined1 auStack_400 [1024];
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x17c))();
  if (DAT_00469ab4 != (int *)0x0) {
    (**(code **)(*DAT_00469ab4 + 0x3c))();
  }
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar3 = FUN_002e5bf0(0);
      if (*(int *)(iVar3 + 0x2c) != 0) goto LAB_000f3a45;
    }
    uStack_410 = 0xf228042f;
    FUN_000f3e30();
    FUN_001ed160();
    return;
  }
LAB_000f3a45:
  uStack_410 = 0xe5a73e1d;
  FUN_000f3e30();
  if (param_1 == 0) {
    iStack_404 = *piVar2;
    iStack_40c = 0x1a4e01d4;
    uStack_408 = 0xcc05846;
    uStack_410 = 0;
    uVar4 = FUN_001e97c0();
    uVar4 = FUN_001e97c0(uVar4);
    puVar5 = &uStack_410;
    iVar3 = iStack_404;
  }
  else {
    uStack_410 = 0x11adc8f3;
    uVar4 = FUN_001e97c0(param_1);
    FUN_002ea9a9(auStack_400,0x200,uVar4);
    iStack_40c = *piVar2;
    uStack_408 = 0;
    uStack_410 = 0xcc05846;
    uVar4 = FUN_001e97c0(auStack_400);
    puVar5 = &uStack_408;
    iVar3 = iStack_40c;
  }
  (**(code **)(iVar3 + 0x34))(puVar5,uVar4);
  FUN_001ed160();
  return;
}
