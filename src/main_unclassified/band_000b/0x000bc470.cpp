/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98D2B8217D28242329985382273EE165BD433080499E4195B68602880688AC0A
 * Entry: 0x000bc470, Ghidra index: 2289, label: FUN_000bc470
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
extern uint32_t PTR_FUN_0039f8e8;
undefined4 * FUN_000bc470(undefined4 *param_1)

{
  FUN_000ba5b0(param_1);
  *param_1 = &PTR_FUN_0039f8e8;
  param_1[0xb] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x2f) = 0xff;
  param_1[0xc] = 0x1e;
  *(undefined2 *)((int)param_1 + 0xe) = 0x14;
  *(undefined2 *)(param_1 + 3) = 0x14;
  param_1[0xd] = 0x41200000;
  return param_1;
}
