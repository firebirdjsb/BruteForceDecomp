/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2592DA34CAD8BB9B70BB1F31576C5BAD6E5D7EC8DEB7B328C77E2A8E74EE1F15
 * Entry: 0x002ee46d, Ghidra index: 10698, label: FUN_002ee46d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003b6c40;
ushort FUN_002ee46d(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
  if ((param_1 == 0xffff) || (0xff < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)(PTR_DAT_003b6c40 + (uint)param_1 * 2);
  }
  return uVar1 & param_2;
}
