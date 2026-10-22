/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12AF5B8714817E5DE97589C64C548BA64BEF745FF6341CDBE6E1953A028A0D44
 * Entry: 0x002d52e0, Ghidra index: 10220, label: FUN_002d52e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d52e0(int *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int in_EAX;
  int iVar3;
  int *in_ECX;
  int in_EDX;
  int iVar4;
  
  pbVar1 = *(byte **)(*(int *)(param_2 + 0x24) + 0x90);
  pbVar2 = *(byte **)(*(int *)(param_2 + 0x10) + 0x90);
  in_ECX[1] = 0;
  in_ECX[0xb] = in_EDX;
  *in_ECX = *(int *)(*(int *)(in_EAX + 0x2c) + 0xc);
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0xc) == 0)) {
    FUN_002d5420(pbVar2,in_EAX);
  }
  pbVar2 = *(byte **)(in_EAX + 0x2c);
  if ((*pbVar2 & 0xc) == 0) {
    if (*(ushort *)(in_ECX + 5) <= *(ushort *)((int)in_ECX + 0x16)) {
      FUN_002ccf80();
    }
    *(byte **)(in_ECX[6] + (uint)*(ushort *)((int)in_ECX + 0x16) * 4) = pbVar2;
    *(short *)((int)in_ECX + 0x16) = *(short *)((int)in_ECX + 0x16) + 1;
  }
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0xc) == 0)) {
    FUN_002d5420(pbVar1,in_EAX);
  }
  pbVar1 = *(byte **)(in_EAX + 0x30);
  if ((*pbVar1 & 0xc) == 0) {
    if (*(ushort *)(in_ECX + 5) <= *(ushort *)((int)in_ECX + 0x16)) {
      FUN_002ccf80();
    }
    *(byte **)(in_ECX[6] + (uint)*(ushort *)((int)in_ECX + 0x16) * 4) = pbVar1;
    *(short *)((int)in_ECX + 0x16) = *(short *)((int)in_ECX + 0x16) + 1;
  }
  if (*(ushort *)(in_ECX + 8) <= *(ushort *)((int)in_ECX + 0x22)) {
    FUN_002ccf80();
  }
  *(int *)(in_ECX[9] + (uint)*(ushort *)((int)in_ECX + 0x22) * 4) = in_EAX;
  *(short *)((int)in_ECX + 0x22) = *(short *)((int)in_ECX + 0x22) + 1;
  FUN_002d5220(in_ECX,in_EAX,param_2);
  iVar4 = 0;
  iVar3 = FUN_002d54e0(in_ECX);
  do {
    if (iVar3 != 1) {
LAB_002d53fd:
      *(int *)(*in_ECX + 0x58) = *(int *)(*in_ECX + 0x58) + iVar4 + 1;
      FUN_002d5a20();
      return;
    }
    iVar3 = in_ECX[1];
    iVar4 = iVar4 + 1;
    in_ECX[1] = iVar3 + 1;
    if (5000 < iVar3 + 1) {
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 0x10))(1);
      }
      goto LAB_002d53fd;
    }
    iVar3 = FUN_002d54e0(in_ECX);
  } while( true );
}
