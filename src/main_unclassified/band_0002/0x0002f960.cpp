/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0C1223AC32AD9B81D33C193E9328DCD9139F7D81A2486F3ED04D7B283A7F8EB
 * Entry: 0x0002f960, Ghidra index: 314, label: FUN_0002f960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
byte FUN_0002f960(char param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  undefined1 uStack_15;
  undefined4 uStack_14;
  int *local_10;
  int local_c;
  int *local_8;
  int *local_4;
  
  local_8 = (int *)FUN_000120f0();
  local_c = *(int *)(in_EAX + 0x510);
  bVar6 = 0;
  if (local_c != 0) {
    local_4 = *(int **)(*(int *)(in_EAX + 0x358) + 4);
    local_10 = (int *)*local_4;
    if (local_10 != local_4) {
      do {
        iVar3 = local_c;
        piVar2 = local_10;
        piVar1 = (int *)local_10[4];
        if (((piVar1 != (int *)0x0) && (local_10[0x1c] == 1)) &&
           (((uint)local_10[0x23] >> 2 & 1) != 0)) {
          iVar5 = (**(code **)(*piVar1 + 0x40))();
          FUN_00023140(iVar3,iVar5 + 0x24);
          fVar7 = (float10)FUN_00306c80();
          if (((float10)*(float *)(iVar3 + 0x5c) * (float10)0.5 <= fVar7 * (float10)57.295776) &&
             ((*(byte *)(piVar2 + 0x23) & 1) != 0)) {
            uStack_14 = 0x41f00000;
            if (param_1 == '\0') {
              uStack_14 = 0;
            }
            (**(code **)(*local_8 + 0xec))(piVar1,&uStack_15,uStack_14);
            cVar4 = FUN_0004d140();
            if (cVar4 != '\0') {
              if (param_1 == '\0') {
                bVar6 = 1;
              }
              else {
                bVar6 = (byte)((uint)piVar2[0x23] >> 3) & 1;
              }
            }
          }
        }
        FUN_0001c5d0();
      } while (local_10 != local_4);
    }
  }
  return bVar6;
}
