/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE9CF8E2245E5B6AB7223AD436CCCD9F5B55A4C393DA2F6FF4D6B25AB46669A7
 * Entry: 0x000aef00, Ghidra index: 2091, label: FUN_000aef00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b0fe0(void);

undefined4 FUN_000aef00(int param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int in_EDX;
  int iVar4;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined8 uVar5;
  
  if ((*(byte *)(in_EDX + 0x70) & 1) != 0) {
    return 0;
  }
  uVar5 = FUN_000b88a0();
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  uVar2 = *(uint *)uVar5;
  fVar3 = 1.0 - *(float *)(iVar4 + 0x57c);
  fVar1 = *(float *)(*(int *)(iVar4 + 0xc) + 0x2a0);
  FUN_000b0fe0(uVar2,*unaff_ESI,unaff_ESI[1],uVar2 & 0xff,uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff,
               unaff_ESI[7],param_1 == iVar4,
               (fVar1 - (1.0 - fVar3 * fVar3) * (fVar1 - *(float *)(*(int *)(iVar4 + 0xc) + 0x2a4)))
               * *(float *)(unaff_EDI + 0x94));
  return 1;
}
