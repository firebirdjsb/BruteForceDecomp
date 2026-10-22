/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 038FF46E2BE192A17D7C938863FD625E7A68F3D1193E444103D789CEBF749EB4
 * Entry: 0x0022b6d0, Ghidra index: 7688, label: FUN_0022b6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
int FUN_0022b6d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  int *piVar6;
  undefined1 local_24 [36];
  
  iVar3 = FUN_00154f50(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  *(int *)(iVar3 + 0x228) = in_ECX + 0x1d8;
  *(undefined4 *)(iVar3 + 0x1f8) = *(undefined4 *)(in_ECX + 700);
  FUN_0022b820(in_ECX,iVar3);
  *(undefined4 *)(iVar3 + 0x1e8) = *(undefined4 *)(in_ECX + 700);
  uVar4 = FUN_0022d820(iVar3);
  FUN_0022d8e0(uVar4);
  iVar1 = *(int *)(*(int *)(iVar3 + 0x228) + 0xf8);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar3 + 0x228) + 0xfc) - iVar1 >> 2 != 0)) {
    *(byte *)(iVar3 + 0x224) = *(byte *)(iVar3 + 0x224) | 0x20;
  }
  *(byte *)(iVar3 + 0x71) = *(byte *)(iVar3 + 0x71) | 0x10;
  uVar5 = 0;
  do {
    while( true ) {
      iVar1 = *(int *)(in_ECX + 0x32c);
      if ((iVar1 == 0) || ((uint)(*(int *)(in_ECX + 0x330) - iVar1 >> 2) <= uVar5)) {
        *(byte *)(iVar3 + 0x224) =
             *(byte *)(iVar3 + 0x224) ^
             ((*(float *)(in_ECX + 0x2a4) == *(float *)(in_ECX + 0x2ac)) << 6 ^
             *(byte *)(iVar3 + 0x224)) & 0x40;
        FUN_00232060(iVar3);
        return iVar3;
      }
      iVar1 = *(int *)(iVar1 + uVar5 * 4);
      if (((iVar1 != DAT_0046d064) && (**(int **)(iVar3 + 0x6c) != 0)) &&
         (iVar2 = *(int *)(**(int **)(iVar3 + 0x6c) + 0x14), iVar2 != 0)) break;
LAB_0022b7d5:
      uVar5 = uVar5 + 1;
    }
    piVar6 = *(int **)(iVar2 + 4);
    if (piVar6 == *(int **)(iVar2 + 8)) goto LAB_0022b7d5;
    do {
      if (*piVar6 == iVar1) {
        if (piVar6 != (int *)0x0) {
          FUN_002333b0(piVar6 + 5);
          FUN_00231ff0(local_24);
        }
        goto LAB_0022b7d5;
      }
      piVar6 = piVar6 + 0xe;
    } while (piVar6 != *(int **)(iVar2 + 8));
    uVar5 = uVar5 + 1;
  } while( true );
}
