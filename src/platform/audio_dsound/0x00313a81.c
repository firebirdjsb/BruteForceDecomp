/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 358DA0C4129966F1A216D3F4230ED68154990CECBF680F585AF770450A117D9A
 * Entry: 0x00313a81, Ghidra index: 12035, label: FUN_00313a81
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f490;
extern uint32_t DAT_0032f4c0;
extern uint32_t DAT_0032f7d8;
extern uint32_t PTR_LAB_003869e0;
void FUN_00313a81(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  in_ECX[1] = 1;
  *in_ECX = &PTR_LAB_003869e0;
  puVar3 = &DAT_0032f4c0;
  puVar4 = in_ECX + 0xd;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_0032f490;
  puVar4 = in_ECX + 0x1d;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((2 < (DAT_0032f7d8 & 0xffff)) || (uVar1 = DAT_0032f7d8, (DAT_0032f7d8 & 0xfffc0000) != 0)) {
    uVar1 = XAPILIB__XGetAudioFlags();
  }
  in_ECX[2] = uVar1;
  puVar3 = in_ECX + 5;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0x1010101;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0x101;
  *(undefined1 *)((int)puVar3 + 2) = 1;
  *(undefined1 *)((int)in_ECX + 0x33) = 0;
  FUN_00311ae1(0);
  return;
}
