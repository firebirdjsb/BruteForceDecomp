/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C551359029B9ABD621207AD92C2D114B211F1DAB6AB128BEF47BF3E0938A53EC
 * Entry: 0x0008a4d0, Ghidra index: 1658, label: FUN_0008a4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
void FUN_0008a4d0(void)

{
  byte bVar1;
  int iVar2;
  byte unaff_SI;
  int unaff_EDI;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)(unaff_EDI + 4);
  iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(uVar3);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0xa4);
    uVar4 = 0x3f800000;
    if ((bVar1 & 1) == 0) {
      uVar4 = 0;
    }
    FUN_00078df0(uVar3,(bVar1 >> 1 & 6 | (bVar1 & 2) << 2 | unaff_SI & 0xe0) ^ bVar1 >> 4 & 1,uVar4,
                 *(undefined4 *)(iVar2 + 0xa0));
    FUN_00089fa0();
    FUN_001e5760(DAT_00469948);
  }
  return;
}
