/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D2E4708AC568C8A9D2ACF93EF3D5E02DA4A4A5EB716980CBE803EDB11360854
 * Entry: 0x0013dec0, Ghidra index: 4024, label: FUN_0013dec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039cc20;
void FUN_0013dec0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[0x41] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x45] = 0;
  /* XBE 0x0013ded5: MOV m32,0x0039cc20 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039cc20);
  in_EAX[0x44] = 0xfffffff2;
  in_EAX[0x43] = 0xfffffff8;
  return;
}
