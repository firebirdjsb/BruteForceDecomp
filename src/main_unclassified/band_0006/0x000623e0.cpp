/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1BC218E5F6E66A9044855DF57D9E03129403D38064DBBB6255A556FB1479EE5
 * Entry: 0x000623e0, Ghidra index: 1054, label: FUN_000623e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a388c;
undefined4 * FUN_000623e0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 in_EAX;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  undefined4 in_EDX;
  
  in_ECX[1] = in_EAX;
  in_ECX[2] = in_EDX;
  in_ECX[3] = 0;
  *in_ECX = &PTR_FUN_003a388c;
  puVar1 = (uint *)*param_1;
  in_ECX[4] = puVar1;
  if (puVar1 != (uint *)0x0) {
    if ((((*puVar1 & 0xffff) == 0) && ((*puVar1 & 0x70000) == 0x50000)) && (puVar1[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(puVar1[5]);
      in_ECX = extraout_ECX;
    }
    *puVar1 = *puVar1 + 1;
  }
  return in_ECX;
}
