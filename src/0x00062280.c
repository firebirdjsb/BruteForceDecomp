/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79B2B5CA54767D4494FCB5540AB047244F55A1AC62C1E49A42A9FF59C796C3DE
 * Entry: 0x00062280, Ghidra index: 1052, label: FUN_00062280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698c4;
undefined4 FUN_00062280(void)

{
  uint *in_EAX;
  undefined4 uVar1;
  uint *local_4;
  
  if (in_EAX == (uint *)0x0) {
    in_EAX = DAT_004698c4;
  }
  local_4 = in_EAX;
  if (in_EAX != (uint *)0x0) {
    if ((((*in_EAX & 0xffff) == 0) && ((*in_EAX & 0x70000) == 0x50000)) && (in_EAX[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(in_EAX[5]);
    }
    *in_EAX = *in_EAX + 1;
  }
  uVar1 = FUN_000622f0(&local_4);
  if (in_EAX != (uint *)0x0) {
    D3D8LTCG__D3DResource_Release(in_EAX);
  }
  return uVar1;
}
