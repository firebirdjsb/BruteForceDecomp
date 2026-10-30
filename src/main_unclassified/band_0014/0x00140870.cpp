/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6506C5B016C546A20C9AA8E51EF01920B907238248FD5EE174E663CDBA5AD63
 * Entry: 0x00140870, Ghidra index: 4082, label: FUN_00140870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c2ec;
void FUN_00140870(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_0039c2ec;
  uVar1 = FUN_00061500(unaff_ESI + 3);
  unaff_ESI[4] = uVar1;
  unaff_ESI[5] = 0;
  uVar1 = FUN_000e0c80(unaff_ESI + 7);
  unaff_ESI[8] = uVar1;
  unaff_ESI[9] = 0;
  *(undefined1 *)(unaff_ESI + 10) = (undefined1)param_1;
  iVar2 = FUN_002ad910(unaff_ESI + 10);
  unaff_ESI[0xb] = iVar2;
  *(undefined1 *)(iVar2 + 0x1d) = 1;
  *(undefined4 *)(unaff_ESI[0xb] + 4) = unaff_ESI[0xb];
  *(undefined4 *)unaff_ESI[0xb] = unaff_ESI[0xb];
  *(undefined4 *)(unaff_ESI[0xb] + 8) = unaff_ESI[0xb];
  unaff_ESI[0xc] = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[6] = param_1;
  return;
}
