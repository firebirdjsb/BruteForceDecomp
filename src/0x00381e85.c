/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 268EB6F4798CFB2C79F21F36F92069B3B122E173530091420BB5A977936FEE0E
 * Entry: 0x00381e85, Ghidra index: 13580, label: FUN_00381e85
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* These addresses have matching definitions in current recovered C drafts.
 * Indirect-call ABI and 32-bit pointer storage remain ABI_UNVERIFIED. */
extern void FUN_0038156d(undefined4 *param_1,uint param_2);
extern void FUN_00381d13(undefined4 *param_1,uint param_2);
extern void FUN_00381887(int param_1,int param_2);
void FUN_00381e85(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int in_EDX;
  uint uVar6;
  uint uVar7;
  uint local_10;
  int local_8;
  
  local_8 = 0;
  pcVar1 = *(char **)(in_EDX + 0x5c);
  local_10 = *(uint *)(pcVar1 + 0xc);
  uVar7 = *(uint *)(pcVar1 + 4);
  if (((local_10 & 0xfff) == 0) && ((uVar7 & 0xfff) == 0)) {
    iVar3 = *(int *)(pcVar1 + 0x10) + (uint)CARRY4(uVar7,local_10);
    if (((int)in_ECX[0x59] < iVar3) ||
       (((int)in_ECX[0x59] <= iVar3 && ((uint)in_ECX[0x58] < uVar7 + local_10)))) goto LAB_00381f01;
    if (uVar7 == 0) {
      *(undefined4 *)(in_EDX + 0x10) = 0;
      goto LAB_00381f0e;
    }
    if ((pcVar1[2] & 0x80U) == 0) {
      local_8 = *(int *)(in_EDX + 0x30) + *(int *)(pcVar1 + 8);
    }
    else {
      local_8 = *(int *)(pcVar1 + 8);
    }
    *(int *)(pcVar1 + 8) = local_8;
  }
  else {
LAB_00381f01:
    *(undefined4 *)(in_EDX + 0x10) = 0xc000000d;
  }
  if (local_8 == 0) {
LAB_00381f0e:
    *(undefined4 *)(in_EDX + 0x14) = 0;
    IofCompleteRequest();
    IoStartNextPacket(*in_ECX);
    return;
  }
  *(undefined4 *)((int)in_ECX + 0x4f) = 0;
  *(undefined4 *)((int)in_ECX + 0x53) = 0;
  *(undefined4 *)((int)in_ECX + 0x57) = 0;
  *(undefined4 *)((int)in_ECX + 0x5b) = 0;
  if (*pcVar1 == '\x03') {
    uVar6 = in_ECX[0x5a];
    *(byte *)((int)in_ECX + 0xf) = *(byte *)((int)in_ECX + 0xf) & 0xf1;
    if (local_10 % uVar6 != 0) {
      uVar4 = uVar6 - local_10 % uVar6;
      in_ECX[6] = uVar4;
      if (uVar7 < uVar4) {
        in_ECX[3] = in_ECX[3] | 0x8000000;
        in_ECX[7] = uVar4 - uVar7;
        goto LAB_00381f95;
      }
      local_10 = local_10 + uVar4;
      local_8 = local_8 + uVar4;
      uVar7 = uVar7 - uVar4;
      in_ECX[3] = in_ECX[3] | 0x2000000;
    }
    uVar6 = uVar7 % uVar6;
    if (uVar6 != 0) {
      uVar7 = uVar7 - uVar6;
      *(byte *)((int)in_ECX + 0xf) = *(byte *)((int)in_ECX + 0xf) | 4;
      in_ECX[7] = uVar6;
    }
    if (uVar7 == 0) {
LAB_00381f95:
      FUN_00381d13(in_ECX,0);
      return;
    }
    if ((*(byte *)((int)in_ECX + 0xf) & 0xe) == 0) {
      in_ECX[0xc] = FUN_0038156d;
    }
    else {
      in_ECX[0xc] = FUN_00381d13;
    }
    *(undefined1 *)((int)in_ECX + 0x37) = 2;
    *(undefined1 *)((int)in_ECX + 0x4f) = 0x2a;
  }
  else {
    in_ECX[0xc] = FUN_00381887;
    *(undefined1 *)((int)in_ECX + 0x37) = 1;
    *(undefined1 *)((int)in_ECX + 0x4f) = 0x28;
  }
  uVar2 = in_ECX[0x56];
  in_ECX[10] = local_8;
  in_ECX[0xb] = uVar7;
  *(undefined2 *)(in_ECX + 0xd) = 8;
  *(undefined1 *)((int)in_ECX + 0x36) = 2;
  uVar5 = FUN_003814f3(local_10 >> ((byte)uVar2 & 0x1f));
  uVar7 = uVar7 >> ((byte)uVar2 & 0x1f);
  *(undefined4 *)((int)in_ECX + 0x51) = uVar5;
  *(ushort *)((int)in_ECX + 0x56) = CONCAT11((char)uVar7,(char)(uVar7 >> 8));
  FUN_00383571();
  return;
}
