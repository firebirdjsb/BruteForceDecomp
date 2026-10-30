/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7C613F5AEF631E7ADD749F984562C5C340337EB40CD6F505FEFD373B570FFAB
 * Entry: 0x0025fd40, Ghidra index: 8617, label: FUN_0025fd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392f0c;
extern uint32_t PTR_FUN_00392f1c;
extern uint32_t PTR_LAB_00392ed0;
extern uint32_t PTR_LAB_00392ee0;
extern uint32_t PTR_LAB_00392f48;
void FUN_0025fd40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_00392f1c;
  unaff_ESI[1] = &PTR_FUN_00392f0c;
  uVar3 = FUN_0025fcb0(unaff_ESI + 3);
  unaff_ESI[4] = uVar3;
  unaff_ESI[5] = 0;
  uVar3 = FUN_0025fcb0(unaff_ESI + 7);
  unaff_ESI[8] = uVar3;
  unaff_ESI[9] = 0;
  unaff_ESI[2] = 0;
  *unaff_ESI = &PTR_LAB_00392ee0;
  unaff_ESI[1] = &PTR_LAB_00392ed0;
  puVar1 = unaff_ESI + 0xb;
  *puVar1 = &PTR_LAB_00392f48;
  unaff_ESI[0xc] = 1;
  unaff_ESI[0xd] = unaff_ESI;
  iVar2 = *(int *)(param_1 + 8);
  unaff_ESI[10] = iVar2;
  if (iVar2 == 0) {
    unaff_ESI[10] = puVar1;
    return;
  }
  **(int **)(param_1 + 0xc) = (int)puVar1;
  return;
}
