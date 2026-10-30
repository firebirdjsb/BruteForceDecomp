/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E6D5008F179AD1F8794E42F3245F4C243DF5CF2ADCAD4EF81CDB12F1708B4A0
 * Entry: 0x00029f90, Ghidra index: 281, label: FUN_00029f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);
extern undefined4 FUN_00055aa0(void);
extern uint FUN_00121f10(void);

undefined4 FUN_00029f90(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  iVar3 = FUN_000120f0();
  if ((*(int *)(in_ECX + 0x8f4) == 0) ||
     ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 == 0)) {
    if (*(int *)(iVar3 + 0x640) == 0) {
      return 2;
    }
  }
  else {
    cVar2 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
    if (cVar2 != '\0') {
      FUN_000255d0(param_1,0);
      FUN_0004d970(in_ECX + -0x40,param_1,4,1,1);
      return 1;
    }
    iVar3 = FUN_00055aa0();
    *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 2;
    iVar3 = FUN_000120f0();
    if ((iVar3 != 0) && (iVar3 = FUN_00055aa0(), *(int *)(iVar3 + 0x58) != 0)) {
      iVar3 = FUN_00055aa0();
      piVar1 = *(int **)(iVar3 + 0x58);
      FUN_000120f0();
      cVar2 = FUN_00121f10();
      if (cVar2 == '\0') {
        return 0;
      }
      iVar3 = *piVar1;
      uVar4 = FUN_000120f0();
      (**(code **)(iVar3 + 0x140))(uVar4);
      return 1;
    }
  }
  return 1;
}
