/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2BBA63CD64EA625594C5B3966C7C4632972E08553538472E6975F7925D670D3
 * Entry: 0x0014ac90, Ghidra index: 4304, label: FUN_0014ac90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b2b0;
extern uint32_t PTR_FUN_0039b390;
void FUN_0014ac90(void)

{
  undefined4 *unaff_EDI;
  
  unaff_EDI[1] = 0;
  *unaff_EDI = &PTR_FUN_0039b2b0;
  unaff_EDI[4] = 0;
  *(undefined2 *)((int)unaff_EDI + 0x1a) = 0;
  unaff_EDI[2] = 0;
  unaff_EDI[5] = 0;
  *(undefined1 *)(unaff_EDI + 6) = 1;
  if (unaff_EDI[4] != 0) {
    FUN_0008f6a0(0);
  }
  *unaff_EDI = &PTR_FUN_0039b390;
  unaff_EDI[8] = 0;
  *(undefined1 *)(unaff_EDI + 0xc) = 0;
  unaff_EDI[0xb] = 0;
  unaff_EDI[10] = 0;
  unaff_EDI[9] = 0;
  return;
}
