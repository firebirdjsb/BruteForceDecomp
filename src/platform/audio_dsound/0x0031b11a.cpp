/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FC8C7F072F1A7BA8DEF7C62768E39BFDFBEC87CD457667C330319FF4007660A
 * Entry: 0x0031b11a, Ghidra index: 12290, label: FUN_0031b11a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff18;
extern uint32_t DAT_0032ff20;
extern uint32_t DAT_0032ff28;
extern uint32_t DAT_0032ff30;
extern uint32_t _DAT_fe802040;
extern uint32_t _DAT_fe802048;
extern uint32_t _DAT_fe8020d4;
extern uint32_t _DAT_fe8020dc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031b11a(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *in_ECX;
  uint uVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar3 = param_1;
  param_1 = 0;
  iVar1 = (uint)(in_ECX[2] != 1) * 2 + 0xc;
  in_ECX[4] = (uint)(&DAT_0032ff18 + iVar1 * 4);
  in_ECX[3] = (uint)(&DAT_0032ff28 + iVar1 * 4);
  uVar5 = (uint)(&DAT_0032ff30)[iVar1 * 4] >> 3 & 0xffff;
  *in_ECX = uVar5;
  in_ECX[1] = uVar3;
  iVar2 = (&DAT_0032ff28)[iVar1 * 4];
  local_c = (&DAT_0032ff20)[iVar1 * 4];
  local_8 = 0;
  local_10 = (&DAT_0032ff18)[iVar1 * 4];
  if (uVar5 != uVar3) {
    do {
      uVar4 = FUN_0031ba6c(&local_10,&local_c,&local_8);
      *(undefined4 *)(iVar2 + 4 + param_1 * 8) = 0;
      *(undefined4 *)(iVar2 + param_1 * 8) = uVar4;
      param_1 = param_1 + 1;
    } while (param_1 < *in_ECX - uVar3);
  }
  if (in_ECX[2] == 0) {
    _DAT_fe8020dc = *in_ECX;
    _DAT_fe802048 = *(undefined4 *)(in_ECX[3] + 4);
  }
  else {
    _DAT_fe8020d4 = *in_ECX - in_ECX[1];
    _DAT_fe802040 = *(undefined4 *)(in_ECX[3] + 4);
  }
  return;
}
