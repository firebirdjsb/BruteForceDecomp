/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 787F4226252B6C8EE29CBEC26A4C237231A3E534E7BA69B660D0F755CB87B79E
 * Entry: 0x00358cb0, Ghidra index: 13159, label: FUN_00358cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00358cb0(int param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((char)param_3 < '\0') || ((*(byte *)(*(int *)(param_1 + 0x10c) + -4 + param_2 * 4) & 1) == 0)
     ) {
    param_3 = param_3 & 0x7f;
    if (param_3 != 0) {
      if (param_3 == 1) {
        if (param_2 < *(uint *)(param_1 + 8)) {
          puVar2 = (uint *)(*(int *)(param_1 + 0x10c) + param_2 * 4);
          do {
            uVar1 = *puVar2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
            if ((uVar1 & 1) != 0) {
              return param_2;
            }
          } while (param_2 < *(uint *)(param_1 + 8));
        }
      }
      else if (param_3 == 2) {
        iVar5 = param_2 - 2;
        do {
          if (iVar5 < 0) {
            if (*(uint *)(param_1 + 8) <= param_2) {
              return 0;
            }
            bVar4 = (byte)*(undefined4 *)(*(int *)(param_1 + 0x10c) + param_2 * 4);
LAB_00358d18:
            param_2 = param_2 + 1;
            if ((bVar4 & 1) != 0) {
              return param_2;
            }
          }
          else {
            if ((*(byte *)(*(int *)(param_1 + 0x10c) + iVar5 * 4) & 1) != 0) {
              return iVar5 + 1;
            }
            if (param_2 < *(uint *)(param_1 + 8)) {
              bVar4 = (byte)*(undefined4 *)(*(int *)(param_1 + 0x10c) + param_2 * 4);
              goto LAB_00358d18;
            }
          }
          iVar5 = iVar5 + -1;
        } while( true );
      }
      return 0;
    }
    iVar5 = param_2 - 2;
    if (0 < iVar5) {
      pbVar3 = (byte *)(*(int *)(param_1 + 0x10c) + iVar5 * 4);
      do {
        if ((*pbVar3 & 1) != 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar3 + -4;
      } while (0 < iVar5);
    }
    param_2 = iVar5 + 1;
  }
  return param_2;
}
