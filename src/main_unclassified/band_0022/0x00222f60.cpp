/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17B3F6055FC7C08CD03E1175B16F758173A3597A3C9016E6E39D02961F200B18
 * Entry: 0x00222f60, Ghidra index: 7596, label: FUN_00222f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003948b8;
void FUN_00222f60(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_LAB_003948b8;
  in_EAX[1] = 1;
  in_EAX[2] = 0;
  in_EAX[8] = 0;
  in_EAX[0xb] = 0;
  in_EAX[10] = 0;
  in_EAX[9] = 0;
  *(byte *)(in_EAX + 0x17) = *(byte *)(in_EAX + 0x17) & 0xfe;
  in_EAX[0xe] = 0;
  in_EAX[0xd] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0x15] = 0x3f800000;
  *(byte *)(in_EAX + 0x17) = *(byte *)(in_EAX + 0x17) & 0xf9 | 8;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[7] = 0;
  in_EAX[6] = 0;
  in_EAX[0x16] = 0;
  return;
}
