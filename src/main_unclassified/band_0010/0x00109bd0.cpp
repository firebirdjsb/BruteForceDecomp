/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07C082DE9C7A6E0F0EA70E4DCBD31AF75679449A449CEBA9D6A964A98435D693
 * Entry: 0x00109bd0, Ghidra index: 3417, label: FUN_00109bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039e100;
void FUN_00109bd0(void)

{
  undefined4 *in_EAX;
  
  FUN_000ee640();
  *in_EAX = &PTR_LAB_0039e100;
  FUN_000b2020();
  FUN_000b2020();
  in_EAX[0x18] = 0;
  in_EAX[0x19] = 0xffb48c8c;
  in_EAX[0x1a] = 0x64dcc8c8;
  in_EAX[0x1b] = 0x3f000000;
  in_EAX[0x1e] = 0;
  in_EAX[0x1f] = 0xff503c3c;
  in_EAX[0x20] = 0xa06e5a5a;
  in_EAX[0x21] = 0x3f000000;
  in_EAX[0x24] = 0;
  return;
}
