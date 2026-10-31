/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA7BECA74EC0D92C6D24B10635B9A456955057CA7C6C0CF268F89E9845937AA1
 * Entry: 0x00023990, Ghidra index: 236, label: FUN_00023990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fcc;
void FUN_00023990(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x45] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  /* XBE 0x000239b9: MOV m32,0x003a3fcc stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x003a3fcc);
  in_EAX[0x46] = param_1;
  in_EAX[0x47] = param_2;
  return;
}
