/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61A20866AC7553637EBAB0A7278806305523DB2556CD25A2ACEA1C8C2A385DF5
 * Entry: 0x000dfbc0, Ghidra index: 2734, label: FUN_000dfbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000df0a0(int param_1,int param_2,int *param_3,char param_4);
extern int FUN_000e0af0(void);
extern void FUN_002b8c60(void);

void FUN_000dfbc0(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (in_EAX == 0) {
    FUN_000df0a0(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = *(int *)(in_EAX + 0x30);
    if (iVar1 != 0) {
      iVar7 = *(int *)(iVar1 + 4);
      bVar4 = false;
      iVar6 = FUN_000e0af0();
      while (iVar6 != 0) {
        if (((*(int *)(iVar6 + 0x18) == 0) &&
            (piVar2 = *(int **)(iVar6 + 0x9c), piVar2 != (int *)0x0)) &&
           (iVar6 = *piVar2, (param_3[0x43] & 1 << ((byte)iVar6 & 0x1f)) == 0)) {
          if (iVar6 == 0) {
            uVar3 = piVar2[1];
            if ((((uVar3 & -(uint)((*(byte *)(uVar3 + 0x26) & 0x40) != 0)) == 0) ||
                ((*(uint *)(*(int *)(uVar3 + 0xc) + 0xa8) >> 9 & 1) != 0)) &&
               ((param_3[0x44] & 1 << ((byte)*(undefined4 *)(*(int *)(uVar3 + 0xc) + 4) & 0x1f)) ==
                0)) {
              cVar5 = (**(code **)(*param_3 + 4))(uVar3);
              bVar8 = cVar5 == '\0';
              goto LAB_000dfc9b;
            }
          }
          else {
            if (iVar6 == 1) {
              bVar8 = (*(uint *)(*(int *)(piVar2[1] + 0xc) + 0xa8) >> 9 & 1) == 0;
LAB_000dfc9b:
              if (bVar8) goto LAB_000dfcc0;
            }
            FUN_002b8c60();
            if (((char)param_4 != '\0') && (*(int *)(param_2 + 0xc) != 0)) {
              bVar4 = true;
            }
          }
        }
LAB_000dfcc0:
        if (-1 < iVar7) {
          do {
            iVar6 = *(int *)(iVar7 * 8 + 4 + *(int *)(iVar1 + 0xc));
            iVar7 = iVar7 + -1;
            if (iVar6 != 0) goto LAB_000dfcea;
          } while (-1 < iVar7);
        }
        iVar6 = 0;
LAB_000dfcea:
        if (bVar4) {
          return;
        }
      }
    }
  }
  return;
}
