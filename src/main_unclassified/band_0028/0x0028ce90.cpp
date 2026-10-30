/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77ED23C9980F91CD9F0B70143D6344F3CF15003634E4E0159EC2A9234EA02619
 * Entry: 0x0028ce90, Ghidra index: 9188, label: FUN_0028ce90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0028ce90(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  uint in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_EDX;
  undefined4 *puVar6;
  
  if (*(char *)(in_EAX + 0x5d) == '\0') {
    return 0x80070005;
  }
  iVar4 = in_ECX + 1;
  if (in_ECX < *(uint *)(in_EAX + 0x10)) {
    if (*(char *)(in_EAX + 0x5c) != '\0') {
      if (iVar4 == *(int *)(in_EAX + 0x58)) {
        iVar4 = *(int *)(in_EAX + 0x54);
      }
      puVar5 = (undefined4 *)(iVar4 * 0x10 + *(int *)(in_EAX + 0x28));
      uVar1 = in_EDX[3];
      uVar2 = in_EDX[2];
      uVar3 = in_EDX[1];
      *puVar5 = *in_EDX;
      puVar5[1] = uVar3;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1;
      puVar5 = (undefined4 *)(*(int *)(in_EAX + 0x54) * 0x10 + *(int *)(in_EAX + 0x28));
      puVar6 = (undefined4 *)(*(int *)(in_EAX + 0x58) * 0x10 + *(int *)(in_EAX + 0x28));
      uVar1 = puVar5[3];
      uVar2 = puVar5[2];
      uVar3 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar3;
      puVar6[2] = uVar2;
      puVar6[3] = uVar1;
      puVar5 = (undefined4 *)((*(int *)(in_EAX + 0x54) + 1) * 0x10 + *(int *)(in_EAX + 0x28));
      puVar6 = (undefined4 *)((*(int *)(in_EAX + 0x58) + 1) * 0x10 + *(int *)(in_EAX + 0x28));
      uVar1 = puVar5[3];
      uVar2 = puVar5[2];
      uVar3 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar3;
      puVar6[2] = uVar2;
      puVar6[3] = uVar1;
      puVar6 = *(undefined4 **)(in_EAX + 0x28);
      puVar5 = puVar6 + *(int *)(in_EAX + 0x58) * 4 + -4;
      uVar1 = puVar5[3];
      uVar2 = puVar5[2];
      uVar3 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar3;
      puVar6[2] = uVar2;
      puVar6[3] = uVar1;
      return 0;
    }
    puVar5 = (undefined4 *)(iVar4 * 0x10 + *(int *)(in_EAX + 0x28));
    uVar1 = in_EDX[3];
    uVar2 = in_EDX[2];
    uVar3 = in_EDX[1];
    *puVar5 = *in_EDX;
    puVar5[1] = uVar3;
    puVar5[2] = uVar2;
    puVar5[3] = uVar1;
    puVar5 = *(undefined4 **)(in_EAX + 0x28);
    *puVar5 = puVar5[4];
    puVar5[1] = puVar5[5];
    puVar5[2] = puVar5[6];
    puVar5[3] = puVar5[7];
    puVar5 = (undefined4 *)(*(int *)(in_EAX + 0x58) * 0x10 + *(int *)(in_EAX + 0x28));
    puVar5[4] = *puVar5;
    puVar5[5] = puVar5[1];
    puVar5[6] = puVar5[2];
    puVar5[7] = puVar5[3];
    return 0;
  }
  return 0x80004005;
}
