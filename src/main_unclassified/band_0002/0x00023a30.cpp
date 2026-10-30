/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06FF3F6190A19F003D8DD501363AE98EC5F4DC30D62A6896778E32B131CC35A6
 * Entry: 0x00023a30, Ghidra index: 238, label: FUN_00023a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fd4;
void FUN_00023a30(void)

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
  *in_EAX = PTR_LAB_003a3fd4;
  return;
}
