/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DBC6739F95870810D825EF369E7393546220BBC6CB1D7110D13A2CF7EEA6DDF
 * Entry: 0x0010c2b0, Ghidra index: 3465, label: FUN_0010c2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e060;
void FUN_0010c2b0(void)

{
  undefined4 *in_EAX;
  
  FUN_000ee640();
  *in_EAX = &PTR_FUN_0039e060;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1d] = 0;
  in_EAX[0x1e] = 0;
  FUN_000b2020();
  in_EAX[0x1e] = 0xc626fd5;
  in_EAX[0x1f] = 0xe;
  in_EAX[0x21] = 0xff00ffff;
  in_EAX[0x22] = 0xffff0000;
  *(byte *)(in_EAX + 0x20) = *(byte *)(in_EAX + 0x20) | 1;
  in_EAX[0x28] = 0;
  in_EAX[0x26] = 0;
  in_EAX[0x23] = 0x3f000000;
  in_EAX[0x27] = 0;
  in_EAX[0x1c] = 0xffffffff;
  return;
}
