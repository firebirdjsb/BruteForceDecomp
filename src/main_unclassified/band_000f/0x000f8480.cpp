/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39BA3A46C69E96E371EE41F2C2299FC0F54B67E24FE19F16191843984C099F71
 * Entry: 0x000f8480, Ghidra index: 3117, label: FUN_000f8480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cd20;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f8480(void)

{
  int iVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_8;
  uint uStack_4;
  
  uVar4 = 0;
  if (((in_EAX != (int *)0x0) && (iVar3 = (**(code **)(*in_EAX + 4))(), iVar3 == 1)) &&
     (iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xe0))(), iVar3 != 0)) {
    iVar1 = *(int *)(iVar3 + 0x30);
    iVar3 = *(int *)(iVar3 + 0x2c);
    uStack_4 = 7;
    uStack_8 = 0;
    /* 0x000f84d0: MOV word [ESP+0x14],BX, with BX zero.
     * Preserve the unknown high bytes without reading them. ABI_UNVERIFIED. */
    bf_x86_word_store_byte(&uStack_18, 0U, UINT8_C(0));
    bf_x86_word_store_byte(&uStack_18, 1U, UINT8_C(0));
    for (; iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
      cVar2 = FUN_000f8310(iVar3,auStack_1c);
      if (cVar2 != '\0') {
        FUN_002eaa70(&DAT_0040cd20);
        FUN_0008ed00();
      }
    }
    FUN_0010a7d0();
    uVar4 = 1;
    if (7 < uStack_4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_18);
    }
  }
  return uVar4;
}
