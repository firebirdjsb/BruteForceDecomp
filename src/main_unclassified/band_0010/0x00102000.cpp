/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80FA82479566ECC5559F0B28601F2FE19CCC7849CC24079C8F624DAAF9A9762E
 * Entry: 0x00102000, Ghidra index: 3259, label: FUN_00102000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
undefined4 FUN_00102000(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(int *)(in_EAX + 0x60) < 0x11) || (0x14 < *(int *)(in_EAX + 0x60))) {
    FUN_000f6da0();
    iVar2 = FUN_000f6e10();
    iVar2 = *(int *)(*(int *)(DAT_00469948 + 0x22c + iVar2 * 4) + 0xc4);
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xbc);
    }
  }
  else {
    iVar2 = FUN_000efa30();
  }
  if (iVar2 != 4) {
    uVar3 = 0xffffffff;
    if (*(int *)(DAT_0046995c + 0x1c) != 0) {
      cVar1 = FUN_002e5880();
      if (cVar1 == '\0') {
        iVar4 = FUN_002e5bf0(0);
        uVar3 = *(undefined4 *)(iVar4 + 0x2c);
      }
      else {
        uVar3 = 0;
      }
    }
    uVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x11c))(iVar2,uVar3);
    return uVar3;
  }
  return 9;
}
