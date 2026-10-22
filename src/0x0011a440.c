/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1139474B5E44543E78CA730E0398B79AE0FC2F3FCCC6922D2A08C1CDE184881D
 * Entry: 0x0011a440, Ghidra index: 3608, label: FUN_0011a440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011a440(float param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int *in_EAX;
  byte bVar4;
  bool bVar5;
  undefined4 uStack_c;
  
  if (in_EAX[0x7f] == 0) {
    FUN_00150670(in_EAX + 0x80,0,0,0);
  }
  iVar2 = in_EAX[0x85];
  *(byte *)(in_EAX + 0x98) = *(byte *)(in_EAX + 0x98) & 0xfb;
  if (iVar2 != 0) {
    bVar4 = 0;
    cVar3 = FUN_00117440();
    if (cVar3 != '\0') {
      bVar4 = ~(*(byte *)(iVar2 + 0x3c) >> 1) & 1;
    }
    if ((in_EAX[0x86] != 0) && ((*(byte *)(iVar2 + 0x3c) & 1) != 0)) {
      bVar4 = 1;
    }
    if ((((*(byte *)(in_EAX + 0x1c) & 1) != 0) || (bVar4 != 0)) &&
       ((*(byte *)(iVar2 + 0x3c) & 2) == 0)) {
      FUN_00117480();
    }
  }
  if (((in_EAX[0x90] != 0) && (in_EAX[0x92] != 0)) && (*(int *)(in_EAX[0x92] + 0x1c) < 1)) {
    FUN_001174d0();
  }
  if (((in_EAX[0x85] == 0) || ((*(byte *)(in_EAX[0x85] + 0x3c) & 2) != 0)) &&
     ((undefined4 *)in_EAX[0x86] != (undefined4 *)0x0)) {
    cVar3 = (**(code **)(*(int *)in_EAX[0x169] + 0xa4))(*(undefined4 *)in_EAX[0x86]);
    if (cVar3 == '\0') {
      in_EAX[0x86] = 0;
    }
    else {
      FUN_0011fd20();
      FUN_00150160();
      in_EAX[0x86] = 0;
      if ((float)in_EAX[0x1f7] != 0.0) {
        in_EAX[0x1f7] = (int)((float)in_EAX[0x154] + (float)in_EAX[0x1f7]);
      }
      *(byte *)(in_EAX + 0x98) = *(byte *)(in_EAX + 0x98) | 4;
    }
  }
  if (in_EAX[0x91] != 0) {
    if (in_EAX[0x92] != 0) {
      FUN_0023d3e0();
      in_EAX[0x92] = 0;
    }
    in_EAX[0x90] = 0;
    FUN_00150160();
    in_EAX[0x91] = 0;
  }
  bVar5 = false;
  if ((*(char *)(in_EAX[0x7f] + 0x251) < '\0') || (in_EAX[0x1ea] != 0)) {
    FUN_00123ea0();
  }
  uStack_c = 0x3de147ae;
  bVar4 = *(byte *)(in_EAX + 0x1f6);
  if ((float)in_EAX[0x1f7] == 0.0) {
    if ((char)bVar4 < '\0') {
      *(byte *)(in_EAX + 0x1f6) = bVar4 & 0x7f;
      if ((*(byte *)(in_EAX + 0x98) & 1) == 0) {
        iVar2 = in_EAX[3];
        *(byte *)(in_EAX + 0x98) = *(byte *)(in_EAX + 0x98) | 2;
        cVar3 = FUN_00112800();
        if (cVar3 == '\0') {
          uStack_c = *(undefined4 *)(iVar2 + 0x23c);
        }
        else {
          uStack_c = *(undefined4 *)(iVar2 + 0x234);
        }
        if ((*(byte *)(in_EAX[0x7f] + 0x251) & 1) != 0) {
          bVar5 = true;
        }
      }
      FUN_00126320();
    }
  }
  else {
    if (-1 < (char)bVar4) {
      *(byte *)(in_EAX + 0x1f6) = bVar4 | 0x80;
      if ((*(byte *)(in_EAX + 0x98) & 1) == 0) {
        *(byte *)(in_EAX + 0x98) = *(byte *)(in_EAX + 0x98) | 2;
        bVar5 = (*(byte *)(in_EAX[0x7f] + 0x251) & 1) != 0;
        iVar2 = in_EAX[3];
        cVar3 = FUN_00112800();
        if (cVar3 == '\0') {
          uStack_c = *(undefined4 *)(iVar2 + 0x238);
        }
        else {
          uStack_c = *(undefined4 *)(iVar2 + 0x230);
        }
      }
    }
    fVar1 = (float)in_EAX[0x1f7] - param_1;
    in_EAX[0x1f7] = (int)fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      in_EAX[0x1f7] = 0;
    }
  }
  if ((((in_EAX[0x87] != 0) && (in_EAX[0x88] != -1)) && ((*(byte *)((int)in_EAX + 0x261) & 2) == 0))
     || (((*(byte *)(in_EAX + 0x1c) & 1) != 0 || ((*(byte *)(in_EAX + 0x1d2) & 8) != 0))))
  goto LAB_0011a742;
  iVar2 = in_EAX[0x7f];
  if ((*(byte *)(iVar2 + 0x251) & 4) == 0) {
    if (((in_EAX[0x80] == 0) || (in_EAX[0x80] == iVar2)) || ((char)in_EAX[0x81] != '\0')) {
      if ((iVar2 == 0) || (in_EAX[0x87] != 0)) goto LAB_0011a73c;
      bVar4 = *(byte *)(in_EAX + 0x98) | 2;
    }
    else {
      bVar4 = *(byte *)(in_EAX + 0x98) | 1;
    }
    *(byte *)(in_EAX + 0x98) = bVar4;
  }
  else {
    FUN_00116ea0();
  }
LAB_0011a73c:
  *(byte *)((int)in_EAX + 0x261) = *(byte *)((int)in_EAX + 0x261) & 0xfd;
LAB_0011a742:
  bVar4 = *(byte *)(in_EAX + 0x98);
  if (((bVar4 & 2) != 0) && ((bVar4 & 4) == 0)) {
    if (((bVar4 & 1) == 0) && ((*(byte *)(in_EAX + 0x1c) & 1) == 0)) {
      fVar1 = (float)in_EAX[0x1f7];
      FUN_0011fd20();
      FUN_00150420(uStack_c,-param_1,0.0 < fVar1,bVar5);
    }
    *(byte *)(in_EAX + 0x98) = *(byte *)(in_EAX + 0x98) & 0xfd;
  }
  if ((*(byte *)(in_EAX + 0x98) & 1) == 0) {
    if ((*(float *)(in_EAX[0x7f] + 0x25c) != 0.0) &&
       (FUN_001258d0(in_EAX,(float)in_EAX[0x124] - param_1 * *(float *)(in_EAX[0x7f] + 0x25c)),
       (float)in_EAX[0x124] == 0.0)) {
      (**(code **)(*in_EAX + 0x15c))(0,0);
    }
  }
  else {
    FUN_00116f40(in_EAX);
  }
  FUN_0011e1d0(in_EAX);
  FUN_0011e3f0();
  FUN_0011e000();
  if (*(char *)((int)in_EAX + 0x225) != '\0') {
    *(char *)((int)in_EAX + 0x225) = *(char *)((int)in_EAX + 0x225) + -1;
  }
  return;
}
