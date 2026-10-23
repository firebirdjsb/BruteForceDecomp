/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 792D6577C8E48ADBA42E21FF13AA8894520B662748209A5BECD39D8585B61DD1
 * Entry: 0x000f7340, Ghidra index: 3097, label: FUN_000f7340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f7340(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  undefined1 auStack_1c [4];
  undefined2 uStack_18;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 7;
  uStack_8 = 0;
  uStack_18 = 0;
  bVar4 = 0;
  cVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x19c))(1,auStack_1c);
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x268))();
    if (9 < uVar3) {
      bVar4 = 1;
    }
  }
  if ((unaff_ESI != (int *)0x0) && (bVar1 = *(byte *)(unaff_ESI + 10), (bVar1 >> 1 & 1) != bVar4)) {
    *(byte *)(unaff_ESI + 10) = (bVar4 << 1 ^ bVar1) & 2 ^ bVar1;
    (**(code **)(*unaff_ESI + 0x24))();
  }
  if (7 < uStack_c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_EBX);
  }
  return;
}
