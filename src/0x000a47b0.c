/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 808E789FECB03C6B0C90216B282B8F7383E4135740BBA6CEE3D865E186C51E1C
 * Entry: 0x000a47b0, Ghidra index: 1958, label: FUN_000a47b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a47b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *unaff_ESI;
  uint uVar3;
  int *local_4;
  
  local_4 = unaff_ESI + 1;
  uVar3 = 0;
  uVar2 = 0;
  piVar1 = unaff_ESI;
  do {
    *piVar1 = 0;
    if ((*(uint *)(param_1 + 0xe4) & 0xf) == uVar3) {
      *local_4 = 10;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xe4) >> 4 & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0xb;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xe4) >> 8 & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0xc;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xe4) >> 0xc & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0xd;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(byte *)(param_1 + 0xe6) & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0xe;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xe4) >> 0x14 & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0xf;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(byte *)(param_1 + 0xe7) & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x10;
      *piVar1 = *piVar1 + 1;
    }
    if (*(uint *)(param_1 + 0xe4) >> 0x1c == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x11;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xe8) & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x12;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xe8) >> 4 & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x13;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xe8) >> 8 & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x14;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xe8) >> 0xc & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x15;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(byte *)(param_1 + 0xea) & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x16;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xe8) >> 0x14 & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x17;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(byte *)(param_1 + 0xeb) & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x18;
      *piVar1 = *piVar1 + 1;
    }
    if (*(uint *)(param_1 + 0xe8) >> 0x1c == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x19;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xec) & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x2b;
      *piVar1 = *piVar1 + 1;
    }
    if ((*(uint *)(param_1 + 0xec) >> 4 & 0xf) == uVar3) {
      unaff_ESI[*piVar1 + uVar2 + 1] = 0x2c;
      *piVar1 = *piVar1 + 1;
    }
    uVar2 = uVar2 + 0x13;
    local_4 = local_4 + 0x13;
    uVar3 = uVar3 + 1;
    piVar1 = piVar1 + 0x13;
  } while (uVar2 < 0x130);
  return;
}
