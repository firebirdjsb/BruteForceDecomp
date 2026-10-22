/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BD3362F2CB1581C754528214A8C255D9C9CDC56E2BD840454A16B946AC444CD
 * Entry: 0x000adf20, Ghidra index: 2081, label: FUN_000adf20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000adf20(void)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0xdc) = 1;
  if ((*(byte *)(in_EAX + 0x2c) & 2) != 0) {
    *(undefined4 *)(in_EAX + 0xd4) = 0x30;
    *(undefined4 *)(in_EAX + 0xd8) = 0x30;
    *(undefined4 *)(in_EAX + 0xac) = 0x3f400000;
    *(undefined4 *)(in_EAX + 0x88) = 0x1d;
    *(undefined4 *)(in_EAX + 0x9c) = 0x40c00000;
    *(undefined2 *)(in_EAX + 0xe) = 0x60;
    *(undefined2 *)(in_EAX + 0xc) = 0x60;
    return;
  }
  *(undefined4 *)(in_EAX + 0xd4) = 0x40;
  *(undefined4 *)(in_EAX + 0xd8) = 0x40;
  *(undefined4 *)(in_EAX + 0xac) = 0x3f800000;
  *(undefined4 *)(in_EAX + 0x88) = 0x27;
  *(undefined4 *)(in_EAX + 0x9c) = 0x41000000;
  *(undefined2 *)(in_EAX + 0xe) = 0x80;
  *(undefined2 *)(in_EAX + 0xc) = 0x80;
  return;
}
