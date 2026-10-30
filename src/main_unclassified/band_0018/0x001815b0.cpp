/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 362C2D2E4BE0D812F55A1615F740FFBC64B829202D3A53B410090F433293F553
 * Entry: 0x001815b0, Ghidra index: 5157, label: FUN_001815b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00399ba0;
void FUN_001815b0(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  
  in_EAX[0x19] = in_ECX;
  *(byte *)(in_EAX + 7) = *(byte *)(in_EAX + 7) & 0xfc;
  in_EAX[9] = 0;
  in_EAX[0xb] = 0;
  *(undefined1 *)(in_EAX + 10) = 0;
  *in_EAX = &PTR_LAB_00399ba0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[4] = 0;
  in_EAX[2] = 0;
  in_EAX[1] = 0;
  in_EAX[3] = 0;
  in_EAX[0xe] = 0;
  *(byte *)(in_EAX + 7) = *(byte *)(in_EAX + 7) & 0xd3 | 0x10;
  in_EAX[8] = in_EAX[8] & 0xfffffff0;
  return;
}
