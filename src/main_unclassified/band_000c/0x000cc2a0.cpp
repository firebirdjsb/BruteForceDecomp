/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27C1D8952F32FB38A393BC48888C3E8C7006A3D7B0740A193CCF63244901DC8C
 * Entry: 0x000cc2a0, Ghidra index: 2524, label: FUN_000cc2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_0039f004;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000cc2a0(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  in_EAX[0x1a] = 0;
  in_EAX[0x19] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x25] = 0;
  in_EAX[0x1f] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x21] = 0;
  *in_EAX = &PTR_FUN_0039f004;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  in_EAX[0x22] = 0x43000000;
  in_EAX[0x23] = 0x42c80000;
  in_EAX[0x24] = 0x40800000;
  in_EAX[0x1c] = 0x40400000;
  in_EAX[0x1d] = 0x40800000;
  in_EAX[7] = 4;
  in_EAX[0x1e] = 0x41600000;
  return;
}
