/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 895934DFC08CF7E8890389D0DAE956BAFB64FE147A8A90373AE173E8414D2EB8
 * Entry: 0x000216f0, Ghidra index: 188, label: FUN_000216f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000216f0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  
  iVar5 = 1;
  if ((((*(byte *)(in_EAX + 0x728) & 1) != 0) && (0.0 < *(float *)(in_EAX + 0x724))) &&
     (((*(code *)**(undefined4 **)(in_EAX + 0x720))(*(undefined4 *)(in_EAX + 0x440)),
      (*(byte *)(in_EAX + 0x728) & 1) == 0 ||
      (*(float *)(in_EAX + 0x724) < 0.0 != (*(float *)(in_EAX + 0x724) == 0.0))))) {
    iVar5 = FUN_00021840(in_EAX,unaff_EBX);
    if (iVar5 == 1) {
      return 1;
    }
    if (iVar5 == 0) {
      *(undefined4 *)(in_EAX + 0x6ac) = 0xe;
    }
  }
  FUN_0003f0e0(1);
  if ((*(float *)(in_EAX + 0x718) + 3.0 <= *(float *)(unaff_EBX + 4)) ||
     (iVar4 = FUN_00020ad0(), iVar4 < 4)) {
    if (*(float *)(unaff_EBX + 4) <= *(float *)(in_EAX + 0x734) + 5.0) goto LAB_000217fe;
    *(undefined4 *)(in_EAX + 0x6ac) = 7;
    if (*(int *)(in_EAX + 0x6c0) != 0) {
      puVar1 = (uint *)(*(int *)(in_EAX + 0x6c0) + 0x28);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    *(undefined4 *)(in_EAX + 0x6c0) = 0;
    *(byte *)(in_EAX + 0x728) = *(byte *)(in_EAX + 0x728) & 0xfa | 2;
  }
  else {
    *(undefined4 *)(in_EAX + 0x6ac) = 7;
    if (*(int *)(in_EAX + 0x6c0) != 0) {
      puVar1 = (uint *)(*(int *)(in_EAX + 0x6c0) + 0x28);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    *(undefined4 *)(in_EAX + 0x6c0) = 0;
    *(byte *)(in_EAX + 0x728) = *(byte *)(in_EAX + 0x728) & 0xfa | 2;
  }
  *(undefined4 *)(in_EAX + 0x72c) = 0;
  *(undefined4 *)(in_EAX + 0x724) = 0;
LAB_000217fe:
  uVar2 = *(undefined4 *)(in_EAX + 0x6dc);
  uVar3 = *(undefined4 *)(in_EAX + 0x6d8);
  *param_1 = *(undefined4 *)(in_EAX + 0x6d4);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  FUN_0004d970(in_EAX,param_1,1,1,1);
  return iVar5;
}
