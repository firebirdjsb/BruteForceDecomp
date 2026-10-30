/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78E842D71AA3FFABC56FD498077696B4AA04C54A418B535283FDCAB6EFE50B15
 * Entry: 0x000caec0, Ghidra index: 2510, label: FUN_000caec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000caec0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int *in_ECX;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar2 = (float)(int)*(short *)((int)in_ECX + 0xe) * 0.5;
  piVar1 = in_ECX + 0xb;
  fVar3 = (float)(int)(short)in_ECX[3] * 0.5;
  fVar4 = fVar3;
  (**(code **)(*in_ECX + 4))
            (piVar1,fVar2,fVar3,fVar2,fVar3,0xff,1,1,in_ECX[8],0,0,0,0,0x3f800000,0x3f800000,0,0,0);
  fVar6 = 3.57331e-43;
  (**(code **)(*in_ECX + 4))
            (piVar1,fVar2,-fVar4,fVar2,fVar3,0xff,1,1,in_ECX[8],0,0,0,0,0x3f800000,0x3f800000,0,0,0)
  ;
  uVar5 = 0xff;
  fVar4 = fVar3;
  (**(code **)(*in_ECX + 4))
            (piVar1,-fVar6,fVar3,fVar2,fVar3,0xff,1,1,in_ECX[8],0,0,0,0,0x3f800000,0x3f800000,0,0,0)
  ;
  (**(code **)(*in_ECX + 4))
            (piVar1,uVar5,fVar4,fVar2,fVar3,0xff,1,1,in_ECX[8],0,0,0,0,0x3f800000,0x3f800000,0,0,0);
  return;
}
