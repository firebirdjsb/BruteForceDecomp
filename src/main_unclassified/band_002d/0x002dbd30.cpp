/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB6F282C008BCCB84916EF8C4A038B53CF6C2076D1F66E3B3376B128DF296F5D
 * Entry: 0x002dbd30, Ghidra index: 10291, label: FUN_002dbd30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002dbd30(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  float *pfVar4;
  float *in_ECX;
  int iVar5;
  int iVar6;
  
  FUN_002dbee0(in_EAX);
  FUN_002dbf30(in_EAX);
  for (iVar5 = (int)in_ECX[10] + -2; in_EAX < iVar5; iVar5 = iVar5 + -1) {
    fVar2 = *(float *)((int)in_ECX[2] + ((int)in_ECX[9] * iVar5 + in_EAX) * 4);
    if (fVar2 != 0.0) {
      FUN_002dc030(in_ECX,(int)in_ECX[10] + -1,iVar5,fVar2);
    }
    *(undefined4 *)((int)in_ECX[2] + ((int)in_ECX[9] * iVar5 + in_EAX) * 4) = 0;
  }
  iVar5 = FUN_002db860();
  if (iVar5 != 1) {
    FUN_002dc030(in_ECX,(int)in_ECX[10] + -1,in_EAX,0xbf800000);
    *(undefined4 *)((int)in_ECX[2] + ((int)in_ECX[9] + 1) * in_EAX * 4) = 0x3f800000;
  }
  if (in_EAX < (int)in_ECX[10] + -1) {
    do {
      fVar2 = *(float *)((int)in_ECX[2] + ((int)in_ECX[9] * ((int)in_ECX[10] + -1) + in_EAX) * 4);
      if (fVar2 != 0.0) {
        FUN_002db9b0(in_ECX,in_EAX,(int)in_ECX[10] + -1,fVar2);
      }
      in_EAX = in_EAX + 1;
    } while (in_EAX < (int)in_ECX[10] + -1);
  }
  fVar2 = (float)((int)in_ECX[10] + -1);
  uVar1 = (int)in_ECX[1] + (int)in_ECX[9] * (int)fVar2 * 4;
  fVar3 = *(float *)(uVar1 + (int)fVar2 * 4);
  if (ABS(fVar3) < *in_ECX) {
    in_ECX[10] = fVar2;
    return 0;
  }
  fVar3 = 1.0 / fVar3;
  pfVar4 = (float *)(uVar1 & 0xfffffff0);
  iVar5 = ((int)(uVar1 - (int)pfVar4) >> 2) + (int)in_ECX[10];
  if (0 < iVar5) {
    iVar5 = (iVar5 - 1U >> 2) + 1;
    do {
      *pfVar4 = *pfVar4 * fVar3;
      pfVar4[1] = pfVar4[1] * fVar3;
      pfVar4[2] = pfVar4[2] * fVar3;
      pfVar4[3] = pfVar4[3] * fVar3;
      pfVar4 = pfVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(uVar1 + (int)fVar2 * 4) = 0x3f800000;
  iVar6 = (int)in_ECX[10] + -1;
  for (iVar5 = (int)in_ECX[10] + -2; -1 < iVar5; iVar5 = iVar5 + -1) {
    fVar2 = *(float *)((int)in_ECX[1] + ((int)in_ECX[9] * iVar5 + iVar6) * 4);
    if (fVar2 != 0.0) {
      FUN_002dbab0(in_ECX,iVar6,iVar5,fVar2);
    }
  }
  in_ECX[10] = (float)((int)in_ECX[10] + -1);
  return 1;
}
