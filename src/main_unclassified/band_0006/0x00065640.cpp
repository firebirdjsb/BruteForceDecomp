/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31A450BF68861E9DA76D4AC3C9BAC5F13C790A5854A6D0B3CC695751702A85AE
 * Entry: 0x00065640, Ghidra index: 1104, label: FUN_00065640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3318;
void FUN_00065640(void)

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
  *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) & 0xf8;
  in_EAX[0x21] = 0x42c80000;
  in_EAX[0x23] = 0x3f800000;
  /* XBE 0x00065686: MOV m32,0x003a3318 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x003a3318);
  in_EAX[0x25] = 0;
  in_EAX[0x27] = 0;
  in_EAX[0x28] = 0;
  in_EAX[0x29] = 0;
  in_EAX[0x2a] = 0;
  in_EAX[0x2b] = 0;
  *(undefined1 *)(in_EAX + 0x2d) = 1;
  *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) | 2;
  return;
}
