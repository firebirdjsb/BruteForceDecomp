/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33F4030AA56C7197F5D3E956935640B8E5390F828458A6939CF5F8FB27B6D5E5
 * Entry: 0x000b8710, Ghidra index: 2222, label: FUN_000b8710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bc9c0(void);

extern uint32_t PTR_FUN_0039fbc0;
void FUN_000b8710(void)

{
  undefined4 *in_EAX;
  
  FUN_000bc9c0();
  /* XBE 0x000b871a: MOV m32,0x0039fbc0 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039fbc0);
  in_EAX[0x18] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0xd] = 0;
  in_EAX[0xe] = 0;
  in_EAX[0xf] = 0;
  in_EAX[0x10] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x15] = 0;
  in_EAX[0x16] = 0;
  *(undefined2 *)(in_EAX + 9) = 5;
  return;
}
