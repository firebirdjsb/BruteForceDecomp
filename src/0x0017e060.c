/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25A5D91B4CDD23BC7D50F900F5EAD12FD81C1C6267545C12EDF8D9A29E19DAD5
 * Entry: 0x0017e060, Ghidra index: 5098, label: FUN_0017e060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469d94;
extern uint32_t DAT_00469d98;
extern uint32_t DAT_00469d9c;
void FUN_0017e060(undefined1 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  
  uVar2 = DAT_00469d9c;
  uVar1 = DAT_00469d98;
  *in_EAX = DAT_00469d94;
  in_EAX[1] = uVar1;
  in_EAX[2] = uVar2;
  *(undefined1 *)(in_EAX + 3) = 0;
  uVar2 = DAT_00469d9c;
  uVar1 = DAT_00469d98;
  in_EAX[4] = DAT_00469d94;
  in_EAX[5] = uVar1;
  in_EAX[6] = uVar2;
  *(undefined1 *)(in_EAX + 7) = 0;
  uVar2 = DAT_00469d9c;
  uVar1 = DAT_00469d98;
  in_EAX[8] = DAT_00469d94;
  in_EAX[9] = uVar1;
  in_EAX[10] = uVar2;
  *(undefined1 *)(in_EAX + 0xb) = 0;
  *(undefined1 *)(in_EAX + 0xd) = 0;
  in_EAX[0xc] = 0x3f800000;
  *(undefined1 *)(in_EAX + 0xf) = 0;
  in_EAX[0xe] = 0x41200000;
  in_EAX[0x10] = 0x3f800000;
  *(undefined1 *)(in_EAX + 0x11) = 0;
  in_EAX[0x12] = 0x3f800000;
  *(undefined1 *)(in_EAX + 0x13) = 0;
  in_EAX[0x14] = 0x3f800000;
  *(undefined1 *)(in_EAX + 0x15) = 0;
  in_EAX[0x16] = 0;
  *(undefined1 *)(in_EAX + 0x17) = 0;
  in_EAX[0x18] = 0;
  *(undefined1 *)(in_EAX + 0x19) = 0;
  *(undefined1 *)((int)in_EAX + 0x69) = 0;
  *(undefined1 *)(in_EAX + 0x1a) = 1;
  *(undefined1 *)((int)in_EAX + 0x6a) = 0;
  *(undefined1 *)((int)in_EAX + 0x6b) = 0;
  *(undefined1 *)((int)in_EAX + 0x6b) = 1;
  *(undefined1 *)((int)in_EAX + 0x6a) = param_1;
  return;
}
