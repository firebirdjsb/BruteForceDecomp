/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B449B196942FD82C9BD6C4E27BF5603A6F4941CFA968721F7BA69BC2D1D6233
 * Entry: 0x0017e7c0, Ghidra index: 5107, label: FUN_0017e7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399c40;
extern uint32_t PTR_LAB_00399cd8;
void FUN_0017e7c0(void)

{
  char cVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 in_ECX;
  undefined1 local_1;
  
  *in_EAX = PTR_LAB_00399cd8;
  *(undefined1 *)(in_EAX + 1) = 0;
  in_EAX[9] = 0;
  in_EAX[8] = 0;
  in_EAX[7] = 0;
  in_EAX[5] = 0;
  in_EAX[4] = 0;
  in_EAX[3] = 0;
  in_EAX[10] = 0x3f800000;
  in_EAX[6] = 0x3f800000;
  in_EAX[2] = 0x3f800000;
  in_EAX[0xd] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0xb] = 0;
  FUN_0017e140();
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *in_EAX = &PTR_FUN_00399c40;
  *(undefined1 *)(in_EAX + 0x33) = local_1;
  iVar2 = FUN_0025ae60(in_EAX + 0x33);
  in_EAX[0x34] = iVar2;
  *(undefined1 *)(iVar2 + 0x15) = 1;
  *(undefined4 *)(in_EAX[0x34] + 4) = in_EAX[0x34];
  *(undefined4 *)in_EAX[0x34] = in_EAX[0x34];
  *(undefined4 *)(in_EAX[0x34] + 8) = in_EAX[0x34];
  in_EAX[0x35] = 0;
  FUN_00181e30();
  *(undefined1 *)(in_EAX + 100) = local_1;
  iVar2 = FUN_00181170(in_EAX + 100);
  in_EAX[0x65] = iVar2;
  *(undefined1 *)(iVar2 + 0x41) = 1;
  *(undefined4 *)(in_EAX[0x65] + 4) = in_EAX[0x65];
  *(undefined4 *)in_EAX[0x65] = in_EAX[0x65];
  *(undefined4 *)(in_EAX[0x65] + 8) = in_EAX[0x65];
  in_EAX[0x66] = 0;
  in_EAX[0x36] = 0;
  in_EAX[0x69] = 0;
  in_EAX[0x6a] = 0x3f800000;
  in_EAX[0x6b] = 0x3f800000;
  in_EAX[0x6c] = 0x3f800000;
  in_EAX[0x6d] = 0x3f800000;
  cVar1 = FUN_0017f830();
  if ((cVar1 != '\0') && (cVar1 = FUN_0017f960(), cVar1 != '\0')) {
    FUN_0017f9b0(in_EAX);
  }
  return;
}
