/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6BDA7FEDEB2E8341086F009E700B8E78E8809C5DECDE54662D1634CCE27D541
 * Entry: 0x001fedb0, Ghidra index: 7241, label: FUN_001fedb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_001fedb0(undefined4 param_1,int *param_2,byte *param_3)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int in_ECX;
  byte bVar8;
  char cVar9;
  
  pbVar3 = param_3;
  piVar2 = param_2;
  cVar7 = '\0';
  cVar9 = (char)param_1;
  if (*param_2 == -0x1fd00968) {
    if (cVar9 == '\0') {
      *(undefined4 *)(in_ECX + 4) = *(undefined4 *)param_3;
    }
    else {
      *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 4);
    }
    cVar7 = '\x01';
  }
  if (cVar7 == '\0') {
    iVar1 = *param_2;
    bVar5 = *(byte *)(in_ECX + 0x3d) & 1;
    param_2._0_1_ = '\0';
    bVar4 = false;
    if (iVar1 == 0xbaeb457) {
      if (cVar9 == '\0') {
        bVar5 = *param_3;
      }
      else {
        *param_3 = bVar5;
      }
      bVar4 = true;
      param_2._0_1_ = '\x01';
    }
    bVar8 = *(byte *)(in_ECX + 0x3d);
    *(byte *)(in_ECX + 0x3d) = bVar8 ^ (*(byte *)(in_ECX + 0x3d) ^ bVar5) & 1;
    bVar5 = bVar8 >> 3 & 1;
    if ((!bVar4) && (*piVar2 == 0x137926ff)) {
      if (cVar9 == '\0') {
        bVar5 = *param_3;
      }
      else {
        *param_3 = bVar5;
      }
      bVar4 = true;
      param_2._0_1_ = '\x01';
    }
    bVar8 = *(byte *)(in_ECX + 0x3d) ^ (bVar5 << 3 ^ *(byte *)(in_ECX + 0x3d)) & 8;
    bVar5 = bVar8 >> 2 & 1;
    *(byte *)(in_ECX + 0x3d) = bVar8;
    if ((!bVar4) && (*piVar2 == 0x1eec0e75)) {
      if (cVar9 == '\0') {
        bVar5 = *param_3;
      }
      else {
        *param_3 = bVar5;
      }
      bVar4 = true;
      param_2._0_1_ = '\x01';
    }
    bVar8 = *(byte *)(in_ECX + 0x3d) ^ (bVar5 << 2 ^ *(byte *)(in_ECX + 0x3d)) & 4;
    bVar5 = bVar8 >> 1 & 1;
    *(byte *)(in_ECX + 0x3d) = bVar8;
    if ((!bVar4) && (*piVar2 == -0x9a80867)) {
      if (cVar9 == '\0') {
        bVar5 = *param_3;
      }
      else {
        *param_3 = bVar5;
      }
      bVar4 = true;
      param_2._0_1_ = '\x01';
    }
    bVar8 = *(byte *)(in_ECX + 0x3d);
    bVar6 = bVar8 >> 4 & 1;
    *(byte *)(in_ECX + 0x3d) = bVar8 ^ (bVar5 << 1 ^ bVar8) & 2;
    if ((!bVar4) && (*piVar2 == -0xf6f1445)) {
      if (cVar9 == '\0') {
        bVar6 = *param_3;
      }
      else {
        *param_3 = bVar6;
      }
      bVar4 = true;
      param_2._0_1_ = '\x01';
    }
    cVar7 = *(char *)(in_ECX + 0x3c);
    *(byte *)(in_ECX + 0x3d) =
         *(byte *)(in_ECX + 0x3d) ^ (bVar6 << 4 ^ *(byte *)(in_ECX + 0x3d)) & 0x10;
    if ((!bVar4) && (*piVar2 == -0xc2298b0)) {
      if (cVar9 == '\0') {
        cVar7 = (char)*(undefined2 *)param_3;
      }
      else {
        *(short *)param_3 = (short)cVar7;
      }
      param_2._0_1_ = '\x01';
      if (cVar9 == '\0') {
        *(char *)(in_ECX + 0x3c) = cVar7;
      }
    }
    param_3 = (byte *)0xe91cf6a8;
    FUN_0020d220(*(undefined4 *)(in_ECX + 0x10),param_1,&param_3,in_ECX + 0x14,piVar2,&param_2,3);
    if (*piVar2 == 0x884288c) {
      param_2._0_1_ = '\x01';
    }
    param_3 = (byte *)0xb6b92ba;
    FUN_0020d320(*(undefined4 *)(in_ECX + 0x10),param_1,&param_3,in_ECX + 0x20,piVar2,pbVar3,
                 &param_2,1);
    bVar5 = *(byte *)(in_ECX + 0x3d) >> 7;
    cVar7 = (char)param_2;
    if (((char)param_2 == '\0') && (*piVar2 == 0xa82e377)) {
      if (cVar9 == '\0') {
        bVar5 = *pbVar3;
      }
      else {
        *pbVar3 = bVar5;
      }
      cVar7 = '\x01';
    }
    *(byte *)(in_ECX + 0x3d) = *(byte *)(in_ECX + 0x3d) & 0x7f | bVar5 << 7;
  }
  return cVar7;
}
