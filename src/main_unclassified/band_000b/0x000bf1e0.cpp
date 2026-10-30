/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB2363BFA4659556922AB38C891EC02EA33C584A671E589CF543655967743991
 * Entry: 0x000bf1e0, Ghidra index: 2328, label: FUN_000bf1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_0015a580(undefined4 param_1,float *param_2);
extern void FUN_0015a480(int *param_1);

extern uint32_t DAT_0041b1a4;
extern uint32_t DAT_0041b1a8;
extern uint32_t DAT_00469ac0;
undefined4 FUN_000bf1e0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  char cVar5;
  int in_EAX;
  int iVar6;
  float *pfVar7;
  int in_ECX;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  piVar2 = *(int **)(in_EAX + 0xe0);
  if (*(char *)(in_ECX + 0x79) == '\x02') {
    if (*(int *)(*(int *)(in_ECX + 0xc) + 4) != 0x14) {
      return 0;
    }
    if (*(int *)(piVar2[3] + 0x15c) == 4) {
      return 0;
    }
    if ((DAT_00469ac0 != 0) && (iVar6 = 0, 0 < DAT_00469ac0)) {
      do {
        if (in_ECX == (&DAT_0041b1a8)[iVar6]) {
          iVar1 = DAT_00469ac0 + -1;
          if (iVar1 == iVar6) {
            DAT_00469ac0 = iVar1;
            return 0;
          }
          uVar3 = *(undefined4 *)(&DAT_0041b1a4 + DAT_00469ac0 * 4);
          *(undefined4 *)(&DAT_0041b1a4 + DAT_00469ac0 * 4) = (&DAT_0041b1a8)[iVar6];
          (&DAT_0041b1a8)[iVar6] = uVar3;
          DAT_00469ac0 = iVar1;
          return 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_00469ac0);
    }
  }
  cVar5 = FUN_0015a580(in_ECX,&local_c);
  if (cVar5 != '\0') {
    iVar6 = (**(code **)(*piVar2 + 0x40))();
    pfVar7 = (float *)FUN_0015a480(in_ECX);
    fVar4 = (*(float *)(iVar6 + 0x24) - *pfVar7) * local_c +
            fStack_8 * (*(float *)(iVar6 + 0x28) - pfVar7[1]) +
            fStack_4 * (*(float *)(iVar6 + 0x2c) - pfVar7[2]);
    if (fVar4 < 0.0 != (fVar4 == 0.0)) {
      return 0;
    }
  }
  return 1;
}
