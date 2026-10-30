/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7084FD5074F379B20D8D5E3020EA60ED5CC4F05E88D46F35A2EF71A7C1DBFE26
 * Entry: 0x000cbdd0, Ghidra index: 2520, label: FUN_000cbdd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching original XBE: these two guest VAs contain NUL-terminated
 * 16-bit UTF-16 format strings, referenced by PUSH immediate instructions.
 * Syntax-only declarations; guest-to-host relocation/linking is NOT done. */
extern const uint16_t u__d____d_0040d654[];
extern const uint16_t u__d_Regen_0040d664[];

void FUN_000cbdd0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  bool bVar4;
  
  iVar2 = (**(code **)(*unaff_ESI + 0x2c))();
  bVar4 = iVar2 != unaff_ESI[0x20];
  if (bVar4) {
    unaff_ESI[0x20] = iVar2;
  }
  iVar2 = *(int *)(unaff_ESI[0x20] + 0x228);
  iVar1 = *(int *)(unaff_ESI[0x20] + 0x1f8);
  if ((*(float *)(iVar2 + 0x14c) == 0.0) && (*(int *)(iVar2 + 0x174) != 0)) {
    iVar2 = FUN_0022da80();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (int)*(short *)(iVar2 + 0x1a);
    }
    if ((((bVar4) || (iVar1 != unaff_ESI[0x21])) || (iVar3 != unaff_ESI[0x22])) &&
       (unaff_ESI[0x22] = iVar3, unaff_ESI[0x21] != -1)) {
      (**(code **)(*(int *)unaff_ESI[0xf] + 0x2c))
                ((int *)unaff_ESI[0xf],u__d____d_0040d654,iVar1,iVar3);
      unaff_ESI[0x21] = iVar1;
      return;
    }
  }
  else if ((bVar4) || (iVar1 != unaff_ESI[0x21])) {
    if (*(float *)(iVar2 + 0x14c) != 0.0) {
      (**(code **)(*(int *)unaff_ESI[0xf] + 0x2c))((int *)unaff_ESI[0xf],u__d_Regen_0040d664,iVar1);
      unaff_ESI[0x21] = iVar1;
      return;
    }
    if (iVar1 != -1) {
      FUN_000bb920();
    }
  }
  unaff_ESI[0x21] = iVar1;
  return;
}
