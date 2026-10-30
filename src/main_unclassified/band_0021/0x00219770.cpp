/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67555A03B064D1BEBC858F98A5206F7E38F620810B9B27CCC70AE01565C85584
 * Entry: 0x00219770, Ghidra index: 7500, label: FUN_00219770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394d80;
extern uint32_t PTR_LAB_0039af90;
void FUN_00219770(void)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  undefined4 *puVar1;
  int iVar2;
  
  *in_EAX = PTR_LAB_0039af90;
  in_EAX[2] = 0;
  in_EAX[1] = 0xffffffff;
  in_EAX[2] = *in_EDX;
  *(byte *)(in_EAX + 3) = *(byte *)(in_EAX + 3) | 1;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  *in_EAX = PTR_FUN_00394d80;
  puVar1 = in_EAX + 10;
  iVar2 = 8;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[0x2a] = 0;
  in_EAX[0x2f] = 0;
  in_EAX[0x30] = 0;
  in_EAX[0x31] = 0;
  in_EAX[0x35] = 0;
  in_EAX[0x36] = 0;
  in_EAX[0x37] = 0;
  in_EAX[0x39] = 0;
  in_EAX[0x3a] = 0;
  in_EAX[0x3b] = 0;
  in_EAX[0x3d] = 0;
  in_EAX[0x3e] = 0;
  in_EAX[0x3f] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x42] = 0;
  in_EAX[0x43] = 0;
  *(undefined1 *)(in_EAX + 7) = 0;
  in_EAX[0x49] = 0;
  in_EAX[0x48] = 0;
  in_EAX[0x33] = 0;
  in_EAX[1] = 0x11;
  in_EAX[8] = 0x3f800000;
  in_EAX[6] = 0xbf800000;
  in_EAX[0x32] = 0x7f7fffff;
  *(byte *)(in_EAX + 0x4a) = *(byte *)(in_EAX + 0x4a) & 0xc0;
  return;
}
