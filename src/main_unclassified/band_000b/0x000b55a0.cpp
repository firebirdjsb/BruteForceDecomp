/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E75C5342AFC40BC6C2189D55D4BE4D47E06D1C399E2564EA6EB56C66078B14E
 * Entry: 0x000b55a0, Ghidra index: 2187, label: FUN_000b55a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b25a0(int param_1,int *param_2);
extern void FUN_000bb600(int param_1);

extern uint32_t DAT_00469ab0;
void FUN_000b55a0(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte in_CL;
  int unaff_ESI;
  int *piVar5;
  int local_8;
  
  uVar2 = DAT_00469ab0;
  *(byte *)(unaff_ESI + 0x80) =
       *(byte *)(unaff_ESI + 0x80) ^ (*(byte *)(unaff_ESI + 0x80) ^ in_CL) & 1;
  iVar3 = FUN_000b9120(uVar2);
  if (iVar3 != 0) {
    if (unaff_ESI + 0x2c != 0) {
      FUN_000b25a0(unaff_ESI + 0x2c,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  *(int *)(unaff_ESI + 100) = iVar3;
  FUN_000bb600(iVar3);
  pbVar1 = (byte *)(*(int *)(unaff_ESI + 100) + 0x13);
  *pbVar1 = *pbVar1 | 1;
  iVar3 = *(int *)(unaff_ESI + 0xb4);
  piVar5 = (int *)(unaff_ESI + 0x68);
  local_8 = 6;
  do {
    iVar4 = FUN_000b9120(DAT_00469ab0);
    if (iVar4 != 0) {
      if (unaff_ESI + 0x2c != 0) {
        FUN_000b25a0(unaff_ESI + 0x2c,iVar4);
      }
      *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
    }
    *piVar5 = iVar4;
    FUN_000bb600(iVar4);
    *(byte *)(*piVar5 + 0x13) = *(byte *)(*piVar5 + 0x13) | 1;
    iVar4 = *piVar5;
    *(short *)(iVar4 + 6) = (short)iVar3;
    *(undefined2 *)(iVar4 + 4) = 0;
    iVar3 = iVar3 + *(int *)(unaff_ESI + 0xb8);
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (*(int *)(unaff_ESI + 0xc0) != 1) {
    *(undefined4 *)(unaff_ESI + 0xc0) = 1;
    pbVar1 = (byte *)(*(int *)(unaff_ESI + 100) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_ESI + 0x68) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_ESI + 0x6c) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_ESI + 0x70) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_ESI + 0x74) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_ESI + 0x78) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_ESI + 0x7c) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    *(undefined4 *)(unaff_ESI + 0x88) = 0;
    *(undefined4 *)(unaff_ESI + 0xbc) = 0;
    *(undefined1 *)(unaff_ESI + 0x82) = 0;
    *(undefined1 *)(unaff_ESI + 0x83) = 0;
    *(undefined1 *)(unaff_ESI + 0x81) = 0;
  }
  return;
}
