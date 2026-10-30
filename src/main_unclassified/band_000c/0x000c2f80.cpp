/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61F2261EDD16660384659EAF282B986D67C77CD045182A1368A0A7553A683412
 * Entry: 0x000c2f80, Ghidra index: 2383, label: FUN_000c2f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++ declaration matches one guest DWORD-pointer argument in the
 * 0x000BA5B0 Ghidra draft; original guest ABI remains UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f48c;
extern uint32_t PTR_FUN_0039f94c;
undefined4 * FUN_000c2f80(undefined4 *param_1)

{
  FUN_000ba5b0(param_1);
  *param_1 = &PTR_FUN_0039f94c;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined1 *)((int)param_1 + 0x2d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x2e) = 0xff;
  *param_1 = &PTR_FUN_0039f48c;
  param_1[0xc] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0x40;
  *(undefined2 *)(param_1 + 3) = 0x40;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined1 *)((int)param_1 + 0x2d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x2e) = 0xff;
  param_1[0xe] = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0xff;
  param_1[0xf] = 0xffffffff;
  param_1[0xd] = 0x3f800000;
  return param_1;
}
