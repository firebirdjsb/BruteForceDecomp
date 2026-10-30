/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD5DFF5E1BD1B25ED1A4109A46834860D7A5715F0006B08CEB6D8AD41FE1299B
 * Entry: 0x00022dc0, Ghidra index: 206, label: FUN_00022dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_FUN_003a4f68;
void FUN_00022dc0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_FUN_003a4f68;
  in_EAX[5] = 0;
  in_EAX[3] = 0;
  in_EAX[2] = 0;
  in_EAX[1] = 0;
  in_EAX[10] = 0;
  in_EAX[0xf] = 0;
  in_EAX[7] = PTR_FUN_003a4f64;
  in_EAX[8] = 0;
  in_EAX[0xd] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x10] = 0;
  *(byte *)(in_EAX + 0x14) = *(byte *)(in_EAX + 0x14) & 0xfe;
  in_EAX[0x16] = 0;
  in_EAX[0x27] = 0;
  FUN_000556e0();
  return;
}
