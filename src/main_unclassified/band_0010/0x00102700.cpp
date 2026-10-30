/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F1FEE7521CA0970113A073D8F56952163EEEDB08FA5907710E30AE12B03B52E
 * Entry: 0x00102700, Ghidra index: 3274, label: FUN_00102700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e310;
void FUN_00102700(void)

{
  undefined4 *in_EAX;
  
  FUN_000ee640();
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x18] = 0;
  *(undefined1 *)(in_EAX + 0x1d) = 0;
  *in_EAX = &PTR_FUN_0039e310;
  in_EAX[0x1f] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x21] = 0;
  in_EAX[0x22] = 0;
  in_EAX[0x24] = 0;
  in_EAX[0x25] = 0;
  in_EAX[0x26] = 0;
  *(undefined1 *)(in_EAX + 0x29) = 0;
  in_EAX[0x2c] = 0;
  in_EAX[0x2b] = 0;
  in_EAX[0x2d] = 0;
  in_EAX[0x27] = 0xffffffff;
  in_EAX[0x28] = 0xffffffff;
  in_EAX[0x2a] = 4;
  return;
}
