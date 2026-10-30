/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F644D268F40C738A6200320EB6F55569FD568F45701D3EA6F17FF16ACF657F8B
 * Entry: 0x0033cf8f, Ghidra index: 12570, label: FUN_0033cf8f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b094c;
void FUN_0033cf8f(undefined4 *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  
  FUN_0033be1d(in_ECX[0x211]);
  puVar3 = (undefined1 *)(in_ECX[0x20b] * 0x200 + in_ECX[0x20c] + in_ECX[3]);
  *puVar3 = (char)in_ECX[0x20f];
  uVar1 = *(ushort *)(&DAT_004b094c + *in_ECX * 10);
  puVar5 = (undefined4 *)(puVar3 + 5);
  for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  iVar2 = *(int *)(in_ECX[5] + 0x14);
  *(int *)(in_ECX[5] + 0x14) = iVar2 + 1;
  *(int *)(puVar3 + 1) = iVar2;
  return;
}
