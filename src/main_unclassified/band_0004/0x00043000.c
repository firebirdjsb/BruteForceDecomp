/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF9C204BD9409040E4BB818135820DAAE1049F3AEEA95A3F372F21BDEC4CBC10
 * Entry: 0x00043000, Ghidra index: 520, label: FUN_00043000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00043000(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined1 *in_EAX;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = param_2;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x24))();
  param_2 = (int *)(**(code **)*puVar4)();
  (**(code **)(*piVar1 + 0xf4))();
  iVar5 = FUN_000388b0(param_1[0xd6]);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 100) != param_3)) {
    iVar5 = 0;
  }
  cVar2 = FUN_0004d140(piVar1,in_EAX + 2,0);
  in_EAX[1] = cVar2;
  in_EAX[3] = iVar5 != 0;
  if ((iVar5 != 0) || (cVar2 != '\0')) {
    in_EAX[4] = 0;
    if (in_EAX[2] != '\0') {
      cVar2 = FUN_000572a0(&param_2,param_2);
      if (cVar2 == '\0') {
        in_EAX[4] = 0;
        in_EAX[5] = 0;
      }
      else {
        in_EAX[4] = (char)param_2;
        in_EAX[5] = (char)((uint)param_2 >> 8);
      }
    }
    if (((in_EAX[3] == '\0') && (in_EAX[1] != '\0')) && (in_EAX[4] != '\0')) {
      *in_EAX = 1;
    }
    if (iVar5 != 0) {
      if ((in_EAX[1] == '\0') || (in_EAX[4] == '\0')) {
        bVar3 = 0;
      }
      else {
        bVar3 = 1;
      }
      uVar6 = *(uint *)(iVar5 + 0x80) ^ ((uint)bVar3 << 5 ^ *(uint *)(iVar5 + 0x80)) & 0x20;
      *(uint *)(iVar5 + 0x80) = uVar6;
      uVar6 = ((uint)(byte)in_EAX[4] << 3 ^ uVar6) & 8 ^ uVar6;
      *(uint *)(iVar5 + 0x80) = uVar6;
      uVar6 = ((uint)(byte)in_EAX[5] << 4 ^ uVar6) & 0x10 ^ uVar6;
      *(uint *)(iVar5 + 0x80) = uVar6;
      if ((*(int *)(piVar1[3] + 4) == 3) && ((uVar6 >> 2 & 1) == 0)) {
        param_2 = *(int **)(iVar5 + 0xc);
        uVar6 = FUN_00054f90(param_2);
        *(uint *)(iVar5 + 0x80) =
             *(uint *)(iVar5 + 0x80) ^ ((uVar6 & 0xff) << 2 ^ *(uint *)(iVar5 + 0x80)) & 4;
      }
    }
  }
  return iVar5;
}
