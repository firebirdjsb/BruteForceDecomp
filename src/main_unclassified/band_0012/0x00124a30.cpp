/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78ADF6646AC15EF158DE8F6888B5B51D34EB7C877D69DE265F5F59224E76E536
 * Entry: 0x00124a30, Ghidra index: 3690, label: FUN_00124a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039dbdc;
void FUN_00124a30(void)

{
  undefined4 *in_EAX;
  
  in_EAX[0x44] = 0;
  in_EAX[0x41] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x45] = 0;
  /* XBE 0x00124a4b: MOV m32,0x0039dbdc stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039dbdc);
  in_EAX[0x43] = 0xfffffffa;
  in_EAX[0x46] = 0;
  return;
}
