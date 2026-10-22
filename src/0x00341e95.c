/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A31A2C54F932CDE290251544698F7BA80E01A24EC459B3F229D9C8FD0B22A18F
 * Entry: 0x00341e95, Ghidra index: 12683, label: FUN_00341e95
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char * FUN_00341e95(char *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint local_8;
  
  if ((param_3 != (int *)0x0) && (local_8 = 0, piVar7 = param_3, param_3[0xb] != 0)) {
    do {
      piVar9 = piVar7 + 1;
      pcVar2 = (char *)*piVar9;
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if ((6 < (uint)((int)pcVar3 - (int)(pcVar2 + 1))) &&
         (iVar4 = __strnicmp(pcVar2,"xmlns:",6), iVar4 == 0)) {
        pcVar5 = (char *)piVar7[6];
        iVar4 = ((int)pcVar3 - (int)(pcVar2 + 1)) - 6;
        pcVar2 = pcVar5 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if ((pcVar5 != pcVar2) && (iVar6 = __strnicmp(param_1,*piVar9 + 6,iVar4), iVar6 == 0)) {
LAB_00341f42:
          param_1 = param_1 + iVar4;
          if (*param_1 != ':') {
            return param_1;
          }
          return param_1 + 1;
        }
      }
      local_8 = local_8 + 1;
      piVar7 = piVar9;
    } while (local_8 < (uint)param_3[0xb]);
  }
  if (param_4 != 0) {
    iVar4 = param_4 * 0x34 + param_2;
    iVar6 = param_4 * 0xd;
    puVar10 = (uint *)(iVar4 + 0x2c);
    piVar7 = (int *)(iVar4 + 4);
    do {
      param_4 = param_4 + -1;
      local_8 = 0;
      piVar7 = piVar7 + -0xd;
      puVar10 = puVar10 + -0xd;
      iVar6 = iVar6 + -0xd;
      param_3 = piVar7;
      if (*puVar10 != 0) {
        do {
          pcVar2 = (char *)*param_3;
          pcVar3 = pcVar2;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          if ((6 < (uint)((int)pcVar3 - (int)(pcVar2 + 1))) &&
             (iVar4 = __strnicmp(pcVar2,"xmlns:",6), iVar4 == 0)) {
            iVar4 = ((int)pcVar3 - (int)(pcVar2 + 1)) - 6;
            pcVar3 = *(char **)(param_2 + 0x18 + (local_8 + iVar6) * 4);
            pcVar2 = pcVar3 + 1;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if ((pcVar3 != pcVar2) && (iVar8 = __strnicmp(param_1,*param_3 + 6,iVar4), iVar8 == 0))
            goto LAB_00341f42;
          }
          local_8 = local_8 + 1;
          param_3 = param_3 + 1;
        } while (local_8 < *puVar10);
      }
    } while (param_4 != 0);
  }
  return param_1;
}
