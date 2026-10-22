/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D8AE84C827012BC17C5DC1FD441246D6629074E213FCEC8055A9A08A3758922
 * Entry: 0x00177600, Ghidra index: 4953, label: FUN_00177600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00399e44;
extern uint32_t PTR_s_23_23_IUserEventControl_00399e48;
extern char s_23_23_IGeoTransformControl_004064bc[];
undefined4 FUN_00177600(int param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  pcVar4 = s_23_23_IGeoTransformControl_004064bc;
  iVar7 = 0;
  pbVar6 = param_2;
LAB_00177615:
  do {
    bVar1 = *pcVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 == *pbVar6) {
      if (bVar1 != 0) {
        bVar1 = pcVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0017763d;
        pcVar4 = pcVar4 + 2;
        pbVar6 = pbVar6 + 2;
        if (bVar1 != 0) goto LAB_00177615;
      }
      iVar5 = 0;
    }
    else {
LAB_0017763d:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (iVar5 == 0) {
      uVar2 = (&DAT_00399e44)[iVar7 * 2];
      if ((int)uVar2 < 0) {
        piVar3 = *(int **)((uVar2 & 0x7fffffff) + param_1);
        (**(code **)(*piVar3 + 4))(piVar3);
        *(int **)param_2 = piVar3;
        return 0;
      }
      piVar3 = (int *)(uVar2 + param_1);
      (**(code **)(*piVar3 + 4))(piVar3);
      *(int **)param_2 = piVar3;
      return 0;
    }
    pcVar4 = (&PTR_s_23_23_IUserEventControl_00399e48)[iVar7 * 2];
    iVar7 = iVar7 + 1;
    pbVar6 = param_2;
    if ((byte *)pcVar4 == (byte *)0x0) {
      *param_3 = 0;
      return 0x80004002;
    }
  } while( true );
}
