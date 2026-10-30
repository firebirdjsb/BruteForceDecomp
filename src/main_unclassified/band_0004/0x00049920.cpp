/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DE852846BC4145EAFE3C4C00C964A8CC44526FF5B42198503DA375C3DDD71A5
 * Entry: 0x00049920, Ghidra index: 590, label: FUN_00049920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3f94;
void FUN_00049920(void)

{
  undefined4 *in_EAX;
  
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x41] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x45] = 0;
  in_EAX[0x46] = 0;
  in_EAX[0x47] = 0xbf800000;
  in_EAX[0x48] = 0x4cbebc20;
  *in_EAX = PTR_LAB_003a3f94;
  return;
}
