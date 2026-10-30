/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 648D8124E9DC9B00B2E779E0DBE1ADDB11A2DC4EE7F2177A4EF0CA8952962C6F
 * Entry: 0x000bc9c0, Ghidra index: 2294, label: FUN_000bc9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00061500(void);

extern uint32_t PTR_FUN_0039f89c;
extern uint32_t PTR_FUN_0039ffac;
void FUN_000bc9c0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_0039ffac;
  unaff_ESI[4] = 0;
  uVar1 = FUN_00061500(unaff_ESI + 5);
  unaff_ESI[6] = uVar1;
  unaff_ESI[7] = 0;
  *(undefined1 *)(unaff_ESI + 10) = 0;
  unaff_ESI[0xb] = 1;
  *(undefined2 *)((int)unaff_ESI + 0x22) = 0;
  *(undefined2 *)(unaff_ESI + 8) = 0;
  *(undefined2 *)(unaff_ESI + 9) = 1;
  unaff_ESI[2] = unaff_ESI;
  unaff_ESI[1] = unaff_ESI;
  *unaff_ESI = &PTR_FUN_0039f89c;
  return;
}
