/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22662999A3296636FA6DB4E5E0ADB3E2FEA1BD4BCA18E11D6B655170F71FE234
 * Entry: 0x00035ec0, Ghidra index: 354, label: FUN_00035ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_00049ca0(void);
extern undefined1 FUN_00024f80(int *param_1,int *param_2,float param_3);
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);
extern undefined4 FUN_00055aa0(void);
extern uint FUN_0003f0e0(char param_1);

undefined4 FUN_00035ec0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = in_ECX + -0x40;
  iVar2 = FUN_000120f0();
  FUN_00049ca0();
  bVar5 = *(byte *)(*(int *)(iVar2 + 0xc) + 0x1a9) & 1;
  if ((*(int *)(in_ECX + 0x8f4) == 0) ||
     ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 == 0)) {
    if ((bVar5 == 0) || (*(int *)(iVar2 + 0x1f8) == 6)) {
      uVar7 = 1;
      uVar6 = 0x41c80000;
      *(undefined4 *)(in_ECX + 100) = 1;
      uVar4 = FUN_00049ca0(0x41c80000,1);
      FUN_00024f80(iVar3,uVar4,uVar6,uVar7);
    }
    return 1;
  }
  cVar1 = FUN_00026d80(iVar3,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
  if (cVar1 != '\0') {
    FUN_000255d0(param_1,0);
    FUN_0004d970(iVar3,param_1,3,1,1);
    return 1;
  }
  iVar3 = FUN_00055aa0();
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 2;
  if (bVar5 == 0) {
    return 1;
  }
  FUN_0003f0e0(1);
  return 1;
}
