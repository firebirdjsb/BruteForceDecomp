/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80CACC3BA2798FAC270584F85A723B7AAD446051ABB2CCC473297AD2FB1936DC
 * Entry: 0x0013feb0, Ghidra index: 4070, label: FUN_0013feb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f2e0;
extern uint32_t PTR_FUN_0039c320;
extern uint32_t PTR_FUN_0039c354;
extern uint32_t PTR_FUN_0039c358;
void FUN_0013feb0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_0039c354;
  unaff_ESI[4] = &PTR_FUN_0039c320;
  uVar1 = FUN_000e0c80(unaff_ESI + 5);
  unaff_ESI[6] = uVar1;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  if ((undefined4 *)unaff_ESI[6] == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)unaff_ESI[6];
  }
  unaff_ESI[8] = uVar1;
  unaff_ESI[9] = &PTR_FUN_0039c358;
  uVar1 = FUN_00061500(unaff_ESI + 0xb);
  unaff_ESI[0xc] = uVar1;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  *(byte *)(unaff_ESI + 3) = *(byte *)(unaff_ESI + 3) & 0xfc;
  unaff_ESI[1] = 0;
  DAT_0041f2e0 = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[2] = 5;
  return;
}
