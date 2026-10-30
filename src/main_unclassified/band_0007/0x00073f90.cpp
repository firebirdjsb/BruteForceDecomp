/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E31E1B4BBC563A0E326E05AB7F6468800C6AEFDFD5071345523E73295DB9CAB5
 * Entry: 0x00073f90, Ghidra index: 1314, label: FUN_00073f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern unkbyte10 FUN_0005a6e0(char param_1);

uint FUN_00073f90(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *unaff_EBX;
  float *unaff_ESI;
  float *unaff_EDI;
  float10 fVar5;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  fVar5 = (float10)FUN_0005a6e0(1);
  if ((float10)param_1 < ABS(fVar5)) {
    local_20 = unaff_ESI[1] * *unaff_EDI - *unaff_ESI * unaff_EDI[1];
    local_24 = *unaff_ESI * unaff_EDI[2] - *unaff_EDI * unaff_ESI[2];
    local_28 = unaff_EDI[1] * unaff_ESI[2] - unaff_ESI[1] * unaff_EDI[2];
    FUN_0001fc70(local_10,&local_28,param_1 * 57.295776);
    pfVar4 = (float *)FUN_0001fb70(local_10,local_1c,unaff_EDI);
    fVar1 = pfVar4[2];
    fVar2 = pfVar4[1];
    fVar3 = *pfVar4;
    *unaff_EBX = fVar3;
    unaff_EBX[1] = fVar2;
    unaff_EBX[2] = fVar1;
    return CONCAT31((int3)((uint)fVar3 >> 8),1);
  }
  fVar1 = unaff_ESI[2];
  fVar2 = unaff_ESI[1];
  fVar3 = *unaff_ESI;
  unaff_EBX[1] = fVar2;
  *unaff_EBX = fVar3;
  unaff_EBX[2] = fVar1;
  return (uint)fVar2 & 0xffffff00;
}
