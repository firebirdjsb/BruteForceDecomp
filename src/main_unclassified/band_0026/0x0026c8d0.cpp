/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49F77E1E3CF69C239DD1DC3ABCA9D28E270D35DC48152DAFE8BA2808DDC5946E
 * Entry: 0x0026c8d0, Ghidra index: 8770, label: FUN_0026c8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443644;
extern uint32_t DAT_00469888;
extern uint32_t DAT_00469898;
extern uint32_t PTR_FUN_00392720;
extern uint32_t PTR_LAB_00392708;
void FUN_0026c8d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  puVar2 = param_1;
  iVar3 = DAT_00443644;
  uVar1 = param_1[4];
  bVar4 = DAT_00443644 != 0;
  *param_1 = &PTR_FUN_00392720;
  if (bVar4) {
    puVar2 = *(undefined4 **)(iVar3 + 4);
    DAT_00469888 = uVar1;
    FUN_00270b70(&param_1,*puVar2,puVar2);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar3 + 4));
  }
  DAT_00443644 = 0;
  if (DAT_00469898 != 0) {
    DAT_00469888 = DAT_00469898;
    FUN_0028a2d0();
    DAT_00469898 = 0;
  }
  DAT_00469888 = uVar1;
  *puVar2 = &PTR_LAB_00392708;
  return;
}
