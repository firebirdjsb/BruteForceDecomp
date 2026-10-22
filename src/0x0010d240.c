/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F18584DB2BA113C6E57EDEE729240B7FCD572FEB6542684D37487BF241F33A3
 * Entry: 0x0010d240, Ghidra index: 3488, label: FUN_0010d240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039dfc8;
void FUN_0010d240(void)

{
  undefined4 *in_EAX;
  
  FUN_000ee640();
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x18] = 0;
  *(undefined1 *)(in_EAX + 0x1d) = 0;
  *in_EAX = &PTR_FUN_0039dfc8;
  in_EAX[0x27] = 0;
  in_EAX[0x28] = 0;
  in_EAX[0x29] = 0;
  in_EAX[0x2b] = 0;
  in_EAX[0x2c] = 0;
  in_EAX[0x2d] = 0;
  in_EAX[0x2f] = 0;
  in_EAX[0x30] = 0;
  in_EAX[0x31] = 0;
  FUN_00109f80(in_EAX + 0x32);
  FUN_000b2020();
  in_EAX[0x76] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x21] = 0;
  in_EAX[0x22] = 0;
  *(undefined1 *)(in_EAX + 0x24) = 0;
  in_EAX[0x6f] = 0xc;
  in_EAX[0x70] = 0xffffc8c8;
  in_EAX[0x71] = 0x649b6464;
  in_EAX[0x75] = 0;
  in_EAX[0x72] = 0x3f000000;
  *(undefined4 *)((int)in_EAX + 0x92) = 0xff646464;
  *(undefined4 *)((int)in_EAX + 0x96) = 0xffffffff;
  in_EAX[0x76] = 0xc626fd5;
  *(undefined1 *)((int)in_EAX + 0x91) = 0;
  in_EAX[0x77] = 0xe;
  return;
}
