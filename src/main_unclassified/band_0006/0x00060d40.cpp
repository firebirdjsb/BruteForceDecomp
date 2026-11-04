/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 383292C937C22EDD6B8F7297C09C975BAD52E60CA2CFDCE79205693946A34C89
 * Entry: 0x00060d40, Ghidra index: 1013, label: FUN_00060d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3b90;
void FUN_00060d40(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[0x1e] = 0;
  *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) & 0xf8;
  in_EAX[0x20] = 0;
  in_EAX[0x21] = 0x42c80000;
  in_EAX[0x22] = 0;
  in_EAX[0x23] = 0x3f800000;
  /* XBE 0x00060d7b: MOV m32,0x003a3b90 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x003a3b90);
  in_EAX[0x28] = 0;
  in_EAX[0x29] = 0;
  in_EAX[0x2a] = 0;
  *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) | 1;
  in_EAX[0x25] = 0;
  in_EAX[0x26] = 0;
  in_EAX[0x2c] = 0;
  in_EAX[0x2d] = 0;
  return;
}
