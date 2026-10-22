/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AFB7D22A20EBA720A819CD1954F19AC23F39C32E08C7C4F70DD4BB3E03B6ECB
 * Entry: 0x001fe660, Ghidra index: 7233, label: FUN_001fe660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
void FUN_001fe660(void)

{
  int *in_EAX;
  undefined **local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)((int)in_EAX + 0x3d) & 0x20) == 0) {
    *(byte *)((int)in_EAX + 0x3d) = *(byte *)((int)in_EAX + 0x3d) | 0x20;
    local_c = (int)(char)in_EAX[0xf];
    local_14 = &PTR_LAB_003a3fb4;
    local_4 = 0xffffffff;
    local_10 = 0xd;
    local_8 = 0;
    (**(code **)(*in_EAX + 0x60))(&local_14);
    FUN_001ff000();
  }
  return;
}
