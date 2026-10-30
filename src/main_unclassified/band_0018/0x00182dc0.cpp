/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA9D91CCB159D7CF331E7A03628D55936AC0C2C3BA16C6D5C903A6F6B2F7492B
 * Entry: 0x00182dc0, Ghidra index: 5189, label: FUN_00182dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399b50;
void FUN_00182dc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_ESI;
  
  FUN_001815b0();
  unaff_ESI[0x1a] = param_1;
  *unaff_ESI = &PTR_FUN_00399b50;
  unaff_ESI[0x2d] = 0;
  unaff_ESI[0x2e] = 0;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x25] = 0;
  *(undefined1 *)(unaff_ESI + 0x2a) = 0;
  *(undefined1 *)((int)unaff_ESI + 0xa9) = 0;
  unaff_ESI[0x28] = 0xffffffff;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  unaff_ESI[0x1e] = param_2;
  FUN_001acd40(0x10);
  return;
}
