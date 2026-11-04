/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6117DCC106A348F42520874D735780AB2F01A2077921EE7F9026B8D916A42414
 * Entry: 0x000239d0, Ghidra index: 237, label: FUN_000239d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fec;
void FUN_000239d0(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x45] = 0;
  in_EAX[0x46] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x47] = 0xbf800000;
  in_EAX[0x48] = 0x4cbebc20;
  /* XBE 0x00023a10: MOV m32,0x003a3fec stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x003a3fec);
  in_EAX[0x49] = param_1;
  *(undefined1 *)(in_EAX + 0x4a) = 1;
  return;
}
