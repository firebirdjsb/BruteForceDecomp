/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEBBD39B810E1E7A6BA0972B3EE1CA5043C0BB204AE35A13A038F91CA833BEF7
 * Entry: 0x000b7f10, Ghidra index: 2213, label: FUN_000b7f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_0039fcc8;
extern uint32_t PTR_LAB_0039fcb4;
void FUN_000b7f10(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  /* XBE MOV m32,imm32 sites: 0x000b7f1a, 0x000b7f20.
   * Guest address values only; register ABI/memory mapping ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039fcc8);
  in_EAX[0xb] = UINT32_C(0x0039fcb4);
  in_EAX[0x1d] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x19] = 0x43020000;
  return;
}
