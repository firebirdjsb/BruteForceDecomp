/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EC7DAA49A6BF44EB9958117B4C3AE977B9BA55591D2E0C113AFD097638CB407
 * Entry: 0x000f2c60, Ghidra index: 3032, label: FUN_000f2c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000f2c60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_4;
  
  iVar1 = FUN_000f22f0();
  iVar2 = FUN_000f22b0();
  iVar3 = FUN_000f23a0();
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (iVar1 == iVar2) {
    if (*piVar4 == 0x120785ef) {
      if (iVar2 < 2) {
        piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        uStack_4 = 0x16f8a761;
      }
      else {
        if (1 < iVar3) {
          return 1;
        }
        piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        uStack_4 = 0xf0aa3e49;
      }
    }
    else {
      if (*piVar4 != -0x104e72d8) {
        return 1;
      }
      if (1 < iVar3) {
        return 1;
      }
      piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      uStack_4 = 0x1f9546c0;
    }
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    uStack_4 = 0xe41e3614;
  }
  (**(code **)(*piVar4 + 8))(&uStack_4,0,0);
  /* Original XBE 0x000f2d1f MOV [ESP+0x10],0xfd890279 and
   * 0x000f2d2c LEA EDX,[ESP+0x10]. Five saved registers
   * identify this as the same saved-ECX word used for the
   * preceding branch-specific uStack_4 constants. */
  uStack_4 = 0xfd890279;
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&uStack_4);
  return 0;
}
