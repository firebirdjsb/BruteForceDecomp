/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 416A6BD83DA6C5483F7901855DC7C6B6AB2891B4AAD7F95025DCF2BE02B744AA
 * Entry: 0x0014b540, Ghidra index: 4315, label: FUN_0014b540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b2b0;
extern uint32_t PTR_FUN_0039b408;
void FUN_0014b540(void)

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
  unaff_EDI[7] = 0;
  *unaff_EDI = &PTR_FUN_0039b408;
  unaff_EDI[5] = 2;
  return;
}
