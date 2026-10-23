/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A93F04EAA98EAA37069145C133D48C99CD389EAE8A69E611C9CF34ADE8C8640B
 * Entry: 0x00066920, Ghidra index: 1120, label: FUN_00066920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3010;
void FUN_00066920(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x22] = 0;
  in_EAX[0x21] = 0x42c80000;
  in_EAX[0x23] = 0x3f800000;
  *in_EAX = &PTR_FUN_003a3010;
  *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) & 0xfc | 4;
  return;
}
